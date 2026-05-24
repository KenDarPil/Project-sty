#include "Sequencer.h"
#include <iostream>

namespace engine {

Sequencer::Sequencer(SFF2Parser& parser, MidiOutput& midiOut, ChordRecognizer& chordRecognizer)
    : m_parser(parser), m_midiOut(midiOut), m_chordRecognizer(chordRecognizer),
      m_sectionStartTick(0), m_sectionEndTick(0), m_relativeTick(0), m_eventIndex(0) {
    m_lastValidChord.rootNote = -1;
}

Sequencer::~Sequencer() {}

void Sequencer::setSection(const std::string& sectionName) {
    m_currentSection = sectionName;
    const auto& events = m_parser.getMidiEvents();
    
    m_sectionStartTick = 0;
    m_sectionEndTick = 0;
    m_eventIndex = 0;
    
    // Find the section markers
    bool foundStart = false;
    for (size_t i = 0; i < events.size(); i++) {
        if (events[i].status == 0xFF && (events[i].data1 == 0x06 || events[i].data1 == 0x01)) {
            if (!foundStart && events[i].metaText == sectionName) {
                m_sectionStartTick = events[i].absoluteTick;
                m_eventIndex = i;
                foundStart = true;
            } else if (foundStart && !events[i].metaText.empty() && events[i].metaText.find("fn:") == std::string::npos) {
                // Next major section marker means the end of this section!
                if (events[i].absoluteTick > m_sectionStartTick) {
                    m_sectionEndTick = events[i].absoluteTick;
                    break;
                }
            }
        }
    }
    
    if (foundStart && m_sectionEndTick == 0) {
        if (!events.empty()) m_sectionEndTick = events.back().absoluteTick;
    }
    
    m_relativeTick = m_sectionStartTick;
    std::cout << "\n[Sequencer] Jumped to Section: " << sectionName << " (Tick " << m_sectionStartTick << " to " << m_sectionEndTick << ")" << std::endl;

    // IMPORTANT: Send all Style Initialization (SInt) Program Changes so it doesn't sound like a piano!
    for (const auto& ev : events) {
        if (ev.absoluteTick > 100) break; // SInt events are packed at the very beginning
        uint8_t type = ev.status & 0xF0;
        uint8_t channel = ev.status & 0x0F;
        
        if (type == 0xC0 || type == 0xB0) {
            uint8_t destChannel = channel;
            // Map the initialization to the correct output channel based on CASM
            for (const auto& rule : m_parser.getCasmRules()) {
                if (rule.sourceChannel == channel && rule.appliedSections.find(m_currentSection) != std::string::npos) {
                    // Ignore 'CC' hijack rules so the Program Change goes to the REAL instrument channel!
                    if (rule.trackName.find("CC") != std::string::npos) continue;
                    
                    destChannel = rule.destChannel;
                }
            }
            if (type == 0xC0) {
                m_midiOut.sendProgramChange(destChannel, ev.data1);
            }
            if (type == 0xB0) {
                // SANITIZE YAMAHA XG BANKS: FluidSynth crashes/defaults to Piano if it receives Yamaha proprietary banks.
                // We force CC 0 (MSB) and CC 32 (LSB) to 0 to guarantee General MIDI fallback!
                if (ev.data1 == 0 || ev.data1 == 32) {
                    m_midiOut.sendControlChange(destChannel, ev.data1, 0); 
                } else {
                    m_midiOut.sendControlChange(destChannel, ev.data1, ev.data2);
                }
            }
        }
    }
}

void Sequencer::tick(uint32_t currentTick) {
    if (m_currentSection.empty() || m_sectionEndTick <= m_sectionStartTick) return;

    // Advance relative playhead by 1 clock pulse (since tick is called per master pulse)
    m_relativeTick++; 
    
    if (m_relativeTick >= m_sectionEndTick) {
        // Stop all hanging notes before looping!
        for (int ch = 0; ch < 16; ch++) {
            m_midiOut.sendControlChange(ch, 123, 0); // All Notes Off CC
        }
        
        m_relativeTick = m_sectionStartTick;
        
        const auto& events = m_parser.getMidiEvents();
        for (size_t i = 0; i < events.size(); i++) {
            if (events[i].absoluteTick >= m_sectionStartTick) {
                m_eventIndex = i;
                break;
            }
        }
        std::cout << "\n[Sequencer] Looping Section: " << m_currentSection << std::endl;
    }
    
    // Debug: Print current chord every downbeat (tick 0 of a measure)
    if (m_relativeTick % 1920 == 0) {
        std::cout << "[Sequencer] Beat " << (m_relativeTick / 1920) + 1 << " | Current Target Chord: " << m_chordRecognizer.detectChord().toString() << std::endl;
    }

    const auto& events = m_parser.getMidiEvents();
    const auto& rules = m_parser.getCasmRules();
    
    while (m_eventIndex < events.size() && events[m_eventIndex].absoluteTick <= m_relativeTick) {
        const MidiEvent& ev = events[m_eventIndex];
        
        uint8_t type = ev.status & 0xF0;
        uint8_t channel = ev.status & 0x0F;
        
        // 1. CASM Channel Mapping (Applies to all events)
        uint8_t destChannel = channel;
        std::string trackName = "";
        bool ruleMatched = false;
        CasmRule matchedRule;
        
        for (const auto& rule : rules) {
            if (rule.sourceChannel == channel && rule.appliedSections.find(m_currentSection) != std::string::npos) {
                if (rule.trackName.find("CC") != std::string::npos) continue;
                destChannel = rule.destChannel;
                trackName = rule.trackName;
                matchedRule = rule;
                ruleMatched = true;
            }
        }
        
        if (!ruleMatched) {
            m_eventIndex++;
            continue;
        }

        if (type == 0x90 || type == 0x80) {
            int note = ev.data1;
            int velocity = ev.data2;
            
            Chord currentChord = m_chordRecognizer.detectChord();
            if (currentChord.rootNote != -1) {
                m_lastValidChord = currentChord; // Update memory!
            }
            
            if (m_lastValidChord.rootNote != -1) {
                note = m_transpositionBrain.calculateTransposition(note, m_lastValidChord, matchedRule);
            }
            
            // DIAGNOSTIC PRINT: We need to see exactly what note is being sent to Carla!
            if (type == 0x90 && velocity > 0) {
                std::cout << "[Output] Track: " << trackName << " | Sent Note: " << (int)note << std::endl;
            }
            
            // 2. MegaVoice Translation
            if (type == 0x90 && velocity > 0 && !trackName.empty()) {
                std::string articulation;
                if (m_megaVoiceTranslator.translate(trackName, note, velocity, articulation)) {
                    // It was a keyswitch! Note and velocity are updated by reference.
                }
            }
            
            // 3. Send to Output
            if (type == 0x90 && velocity > 0) {
                static int debugCount = 0;
                if (debugCount < 10) {
                    std::cout << "DEBUG: Sent NoteOn to loopMIDI (Ch " << (int)destChannel << ", Note " << (int)note << ")" << std::endl;
                    debugCount++;
                }
                m_midiOut.sendNoteOn(destChannel, note, velocity);
            } else {
                m_midiOut.sendNoteOff(destChannel, note);
            }
        } 
        else if (type == 0xB0) {
            if (ev.data1 == 0 || ev.data1 == 32) {
                m_midiOut.sendControlChange(destChannel, ev.data1, 0); // Sanitize Bank Select
            } else {
                m_midiOut.sendControlChange(destChannel, ev.data1, ev.data2);
            }
        }
        else if (type == 0xC0) {
            m_midiOut.sendProgramChange(destChannel, ev.data1);
        }
        
        m_eventIndex++;
    }
}

} // namespace engine

#pragma once
#include <vector>
#include <string>
#include <memory>
#include <mutex>
#include <unordered_map>
#include "../reader/SFF2Parser.h"
#include "../listener/MidiOutput.h"
#include "TranspositionBrain.h"
#include "MegaVoiceTranslator.h"
#include "ChordRecognizer.h"

namespace engine {

class Sequencer {
public:
    Sequencer(SFF2Parser& parser, MidiOutput& midiOut, ChordRecognizer& chordRecognizer);
    ~Sequencer();

    void setSection(const std::string& sectionName);
    void tick(uint32_t absoluteTick);
    void clearNoteMemory();
    
    void updateLiveChord(const Chord& newChord);
    bool isPlaying() const;

private:
    SFF2Parser& m_parser;
    MidiOutput& m_midiOut;
    ChordRecognizer& m_chordRecognizer;
    TranspositionBrain m_transpositionBrain;
    MegaVoiceTranslator m_megaVoiceTranslator;

    std::string m_currentSection;
    uint32_t m_sectionStartTick;
    uint32_t m_sectionEndTick;
    uint32_t m_relativeTick;
    
    // Index in m_midiEvents array to avoid O(N) scanning every tick
    size_t m_eventIndex;
    
    // Chord Memory (Latch mode)
    Chord m_lastValidChord;

    // 2D Array to track exact transposed note pitches [channel][original_note]
    int m_playingNotes[16][128];
    int m_playingVelocities[16][128];

    // Cache for Bank Select MSB/LSB per destination channel
    uint8_t m_cachedMSB[16];
    uint8_t m_cachedLSB[16];

    // Thread Safety & State Cache
    std::mutex m_chordMutex;
    Chord m_activeChord;
    std::unordered_map<uint32_t, int> m_activeNoteMap;
    std::unordered_map<uint32_t, int> m_activeVelocityMap;
    SFF2Parser* m_styleData;

    void killAllActiveNotes();
};

} // namespace engine

#include "MegaVoiceTranslator.h"
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <ctime>

namespace engine {

MegaVoiceTranslator::MegaVoiceTranslator() {
    // We now hardcode Ample Sound specific logic directly in translate() instead of using m_rules
    // to ensure complete coverage of Yamaha's MegaVoice noises.
}

MegaVoiceTranslator::~MegaVoiceTranslator() {}

void MegaVoiceTranslator::addRule(const std::string& trackName, ArticulationRule rule) {
    std::string lowerTrack = trackName;
    for (auto& c : lowerTrack) c = std::tolower(c);
    m_rules[lowerTrack].push_back(rule);
}

bool MegaVoiceTranslator::translate(const std::string& trackName, int& note, int& velocity, std::string& outArticulation) {
    std::string lowerTrack = trackName;
    for (auto& c : lowerTrack) c = std::tolower(c);
    
    bool isGuitar = (lowerTrack.find("gtr") != std::string::npos || 
                     lowerTrack.find("gt") != std::string::npos || 
                     lowerTrack.find("guitar") != std::string::npos);
    bool isBass = (lowerTrack.find("bass") != std::string::npos || 
                   lowerTrack.find("bs") != std::string::npos || 
                   lowerTrack.find("ba") != std::string::npos);

    // If it's a structural mute (-1), leave it alone.
    if (note == -1) return false;

    // --- GUITAR MEGA VOICE TO AMPLE GUITAR ---
    if (isGuitar) {
        bool isYamahaTrigger = (note < 40 || note > 84 || velocity >= 110);
        
        if (isYamahaTrigger) {
            if (velocity >= 110 || note > 84) {
                // High velocity or high note triggers Scratches/Mutes
                int r = std::rand() % 3;
                note = (r == 0) ? 77 : (r == 1 ? 79 : 90); // Scratch, Muting Noise, Hit Top
                velocity = 40; // Soft realistic noise
                outArticulation = "Ample Noise/Scratch";
                return true;
            } else if (note < 40) {
                // Low Yamaha trigger. We map it to Ample Guitar Mute keyswitch (D0 / 26) or Sustain (C0 / 24)
                if (note == 36 || note == 37) {
                    note = 26; // D0 (Palm Mute)
                    velocity = 100;
                    outArticulation = "Ample Palm Mute (KS)";
                    return true;
                } else {
                    note = 24; // C0 (Sustain)
                    velocity = 100;
                    outArticulation = "Ample Sustain (KS)";
                    return true;
                }
            }
        } else {
            // Normal playable note. Clamp velocity to avoid Ample's internal slide triggers (usually > 110).
            if (velocity > 100) velocity = 100;
            return false;
        }
    }

    // --- BASS MEGA VOICE TO AMPLE BASS ---
    if (isBass) {
        bool isYamahaTrigger = (note < 28 || note > 60 || velocity >= 110);

        if (isYamahaTrigger) {
            if (velocity >= 110 || note > 60) {
                // Slaps, Pops, or Slides
                note = 28; // E0 (Slap Keyswitch in Ample Bass)
                velocity = 100;
                outArticulation = "Ample Slap (KS)";
                return true;
            } else if (note < 28) {
                if (note == 24 || note == 25) {
                    note = 26; // D0 (Palm Mute)
                    velocity = 100;
                    outArticulation = "Ample Palm Mute (KS)";
                    return true;
                } else {
                    // Default to Sustain Keyswitch C0
                    note = 24;
                    velocity = 100;
                    outArticulation = "Ample Sustain (KS)";
                    return true;
                }
            }
        } else {
            // Normal playable note. Clamp velocity.
            if (velocity > 100) velocity = 100;
            return false;
        }
    }

    return false;
}

bool MegaVoiceTranslator::translatePatch(const std::string& trackName, uint8_t& bankMSB, uint8_t& bankLSB, uint8_t& program) {
    std::string lowerTrack = trackName;
    for (auto& c : lowerTrack) c = std::tolower(c);
    
    // Preserve banks for drums (which often require MSB 127 or 120)
    if (lowerTrack.find("dr") != std::string::npos || lowerTrack.find("drum") != std::string::npos) {
        return true; 
    }

    // Default bank select to 0 for melodic tracks to fallback to General MIDI
    bankMSB = 0;
    bankLSB = 0;
    
    if (lowerTrack.find("gtr") != std::string::npos || lowerTrack.find("gt") != std::string::npos || lowerTrack.find("guitar") != std::string::npos) {
        // It's a guitar track! Map program to the GM acoustic steel guitar (PC 25) or keep it in the guitar range (24-31)
        if (program < 24 || program > 31) {
            program = 25; // Acoustic Steel Guitar
        }
        return true;
    }
    
    if (lowerTrack.find("bass") != std::string::npos || lowerTrack.find("bs") != std::string::npos || lowerTrack.find("ba") != std::string::npos) {
        // It's a bass track! Map program to GM fingered bass (PC 33) or keep it in the bass range (32-39)
        if (program < 32 || program > 39) {
            program = 33; // Electric Fingered Bass
        }
        return true;
    }

    return false;
}

} // namespace engine

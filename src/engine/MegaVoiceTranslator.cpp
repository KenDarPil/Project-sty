#include "MegaVoiceTranslator.h"
#include "XGVoiceTable.h"
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

bool MegaVoiceTranslator::translate(const std::string& trackName, int& note, int& velocity, int& outKeyswitch, std::string& outArticulation) {
    std::string lowerTrack = trackName;
    for (auto& c : lowerTrack) c = std::tolower(c);
    
    bool isGuitar = (lowerTrack.find("gtr") != std::string::npos || 
                     lowerTrack.find("gt") != std::string::npos || 
                     lowerTrack.find("guitar") != std::string::npos);
    bool isBass = (lowerTrack.find("bass") != std::string::npos || 
                   lowerTrack.find("bs") != std::string::npos || 
                   lowerTrack.find("ba") != std::string::npos);

    outKeyswitch = -1; // Default: no keyswitch

    // If it's a structural mute (-1), leave it alone.
    if (note == -1) return false;

    // --- GUITAR MEGA VOICE TO AMPLE GUITAR ---
    if (isGuitar) {
        // 1. High-Velocity Interception Hook (velocity >= 115) for advanced physical nuances
        if (velocity >= 115) {
            if (velocity <= 118) {
                outKeyswitch = 77; // Note 77 (Scratch)
                outArticulation = "MegaVoice Guitar Scratch (High-Vel)";
                velocity = 80;
            } else if (velocity <= 122) {
                outKeyswitch = 79; // Note 79 (Muting Noise)
                outArticulation = "MegaVoice Guitar Mute Noise (High-Vel)";
                velocity = 80;
            } else {
                outKeyswitch = 28; // E0 keyswitch for slide
                outArticulation = "MegaVoice Guitar Slide (High-Vel)";
                velocity = 90;
            }
            return true;
        }

        // 2. Handle extreme noise triggers (outside playable guitar range)
        if (note < 40 || note > 72) {
            int r = std::rand() % 3;
            note = (r == 0) ? 77 : (r == 1 ? 79 : 90); // Scratch, Muting Noise, Hit Top
            velocity = 40;
            outArticulation = "Ample Noise/Scratch (Out-of-range)";
            return true;
        }

        // 3. Normal playable note velocities
        if (velocity <= 60) {
            outKeyswitch = 24; // C0 (Sustain)
            outArticulation = "Ample Sustain";
            return true;
        } else if (velocity <= 90) {
            outKeyswitch = 26; // D0 (Palm Mute)
            velocity = 90;     // Boost velocity for audibility
            outArticulation = "Ample Palm Mute";
            return true;
        } else if (velocity <= 110) {
            outKeyswitch = 27; // D#0 (Hard Strum)
            velocity = 100;
            outArticulation = "Ample Hard Strum";
            return true;
        } else {
            outKeyswitch = 28; // E0 (Slide)
            velocity = 110;
            outArticulation = "Ample Slide/Strum";
            return true;
        }
    }

    // --- BASS MEGA VOICE TO AMPLE BASS ---
    if (isBass) {
        // 1. High-Velocity Interception Hook (velocity >= 115) for advanced physical nuances
        if (velocity >= 115) {
            if (velocity <= 118) {
                outKeyswitch = 77; // Note 77 (Pop/Slap Scratch)
                outArticulation = "MegaVoice Bass Slap Noise (High-Vel)";
                velocity = 90;
            } else if (velocity <= 122) {
                outKeyswitch = 79; // Note 79 (Slide Noise)
                outArticulation = "MegaVoice Bass Slide Noise (High-Vel)";
                velocity = 90;
            } else {
                outKeyswitch = 16; // E0 keyswitch for Slap Bass (MIDI note 16)
                outArticulation = "MegaVoice Bass Slap (High-Vel)";
                velocity = 100;
            }
            return true;
        }

        // 2. Handle extreme noise triggers (outside playable bass range)
        if (note < 28 || note > 64) {
            note = 28; // Pop/Slap Keyswitch directly as a noise
            velocity = 100;
            outArticulation = "Ample Slap Noise (Out-of-range)";
            return true;
        }

        // 3. Normal playable note velocities
        if (velocity <= 60) {
            outKeyswitch = 12; // C0 (Sustain) (MIDI note 12)
            outArticulation = "Ample Sustain";
            return true;
        } else if (velocity <= 90) {
            outKeyswitch = 14; // D0 (Palm Mute) (MIDI note 14)
            velocity = 95;
            outArticulation = "Ample Palm Mute";
            return true;
        } else if (velocity <= 110) {
            outKeyswitch = 15; // D#0 (Slide) (MIDI note 15)
            velocity = 105;
            outArticulation = "Ample Slide";
            return true;
        } else {
            outKeyswitch = 16; // E0 (Slap) (MIDI note 16)
            velocity = 115;
            outArticulation = "Ample Slap";
            return true;
        }
    }

    return false;
}

bool MegaVoiceTranslator::translatePatch(const std::string& trackName, uint8_t& bankMSB, uint8_t& bankLSB, uint8_t& program) {
    std::string lowerTrack = trackName;
    for (auto& c : lowerTrack) c = std::tolower(c);

    // 1. Preserve banks for drums (which often require MSB 127 or 120 or 126)
    if (lowerTrack.find("dr") != std::string::npos || lowerTrack.find("drum") != std::string::npos || lowerTrack.find("rhy") != std::string::npos) {
        return true; 
    }

    // 2. Preserve rich Bank Select CC0/CC32 and PC values by checking our XG Voice Dictionary
    if (isXGVoice(bankMSB, bankLSB, program)) {
        // Voice combination is perfectly valid in standard XG specifications! Route as-is.
        return true;
    }

    // Fallback 1: Revert bankLSB to 0 (General MIDI basic bank) if it exists for this program change
    if (isXGVoice(bankMSB, 0, program)) {
        bankLSB = 0;
        return true;
    }

    // Fallback 2: Revert entirely to standard GM voice (MSB=0, LSB=0) if it is valid
    if (isXGVoice(0, 0, program)) {
        bankMSB = 0;
        bankLSB = 0;
        return true;
    }

    // Ultimate Fallback: Default to Acoustic Grand Piano (0, 0, 0) if voice is completely unrecognized
    bankMSB = 0;
    bankLSB = 0;
    program = 0;
    return true;
}

} // namespace engine

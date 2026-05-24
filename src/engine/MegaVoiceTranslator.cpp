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
        // Handle Yamaha's extreme noise triggers (outside playable guitar range)
        if (note < 40 || note > 84) {
            int r = std::rand() % 3;
            note = (r == 0) ? 77 : (r == 1 ? 79 : 90); // Scratch, Muting Noise, Hit Top
            velocity = 40;
            outArticulation = "Ample Noise/Scratch";
            return true;
        }

        // It is a normal playable note.
        // Yamaha uses velocity on normal notes to trigger articulations like Palm Mute or Slides.
        if (velocity <= 60) {
            outKeyswitch = 24; // C0 (Sustain)
            outArticulation = "Ample Sustain";
            return true;
        } else if (velocity <= 90) {
            outKeyswitch = 26; // D0 (Palm Mute)
            // Boost velocity back up so the mute is heard clearly
            velocity = 90;
            outArticulation = "Ample Palm Mute";
            return true;
        } else if (velocity <= 110) {
            outKeyswitch = 27; // D#0 (Slide/Scratch depending on context, or hard sustain)
            velocity = 100;
            outArticulation = "Ample Hard Strum";
            return true;
        } else {
            // Very high velocity (> 110)
            outKeyswitch = 28; // E0 or similar articulation (Slide)
            velocity = 110;
            outArticulation = "Ample Slide/Strum";
            return true;
        }
    }

    // --- BASS MEGA VOICE TO AMPLE BASS ---
    if (isBass) {
        // Handle extreme noise/trigger notes (outside playable bass range)
        if (note < 28 || note > 60) {
            note = 28; // Pop/Slap Keyswitch directly (as a noise)
            velocity = 100;
            outArticulation = "Ample Slap Noise";
            return true;
        }

        // Normal playable note. Map velocities to articulations.
        if (velocity <= 60) {
            outKeyswitch = 24; // C0 (Sustain)
            outArticulation = "Ample Sustain";
            return true;
        } else if (velocity <= 90) {
            outKeyswitch = 26; // D0 (Palm Mute)
            velocity = 95; // Boost velocity for audibility
            outArticulation = "Ample Palm Mute";
            return true;
        } else if (velocity <= 110) {
            outKeyswitch = 27; // D#0 (Slide)
            velocity = 105;
            outArticulation = "Ample Slide";
            return true;
        } else {
            outKeyswitch = 28; // E0 (Slap)
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

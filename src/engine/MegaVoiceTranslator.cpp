#include "MegaVoiceTranslator.h"

namespace engine {

MegaVoiceTranslator::MegaVoiceTranslator() {}
MegaVoiceTranslator::~MegaVoiceTranslator() {}

void MegaVoiceTranslator::addRule(const std::string& trackName, ArticulationRule rule) {
    m_rules[trackName].push_back(rule);
}

bool MegaVoiceTranslator::translate(const std::string& trackName, int& note, int& velocity, std::string& outArticulation) {
    auto it = m_rules.find(trackName);
    if (it == m_rules.end()) {
        return false; // No MegaVoice rules exist for this track
    }

    // Check the rules. (Assume rules are sorted by highest velocity first)
    for (const auto& rule : it->second) {
        if (velocity >= rule.velocityThreshold) {
            outArticulation = rule.articulationName;
            
            if (rule.muteOriginalNote) {
                // Completely swap the high-pitched Yamaha note for the VST Keyswitch
                note = rule.keyswitchNote;
                velocity = rule.keyswitchVelocity;
            } else {
                // If we don't mute it, we just add the keyswitch alongside it.
                // For simplicity in this step, we just override the note.
                note = rule.keyswitchNote;
                velocity = rule.keyswitchVelocity;
            }
            
            return true; // We successfully translated the MegaVoice!
        }
    }

    return false;
}

} // namespace engine

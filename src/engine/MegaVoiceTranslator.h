#pragma once
#include <vector>
#include <string>
#include <map>
#include <cstdint>

namespace engine {

// Represents a single MegaVoice articulation rule for VSTs
struct ArticulationRule {
    int velocityThreshold;  // e.g., 120 (Triggered if velocity is >= this)
    int keyswitchNote;      // e.g., 24 (C0 in MIDI)
    int keyswitchVelocity;  // e.g., 100
    bool muteOriginalNote;  // True = Mute the screeching MIDI note and ONLY play the keyswitch
    std::string articulationName; // e.g., "Fret Slide Up"
};

class MegaVoiceTranslator {
public:
    MegaVoiceTranslator();
    ~MegaVoiceTranslator();

    // Adds a rule for a specific instrument track
    void addRule(const std::string& trackName, ArticulationRule rule);

    // Processes an outgoing MIDI note. 
    // If it hits a MegaVoice threshold, it modifies the note/velocity references.
    // If a keyswitch needs to be played *before* the note (like a mute), it returns the keyswitch note in `outKeyswitch`.
    // If `outKeyswitch` is -1, no keyswitch is needed.
    // Returns true if an articulation was triggered or keyswitch was assigned.
    bool translate(const std::string& trackName, int& note, int& velocity, int& outKeyswitch, std::string& outArticulation);

    // Translates Yamaha proprietary Bank Select (CC0/CC32) and Program Change (PC) to standard GM patches.
    // Returns true if a translation occurred.
    bool translatePatch(const std::string& trackName, uint8_t& bankMSB, uint8_t& bankLSB, uint8_t& program);

private:
    // Maps a track name (e.g., "guitar27") to its list of articulation rules
    std::map<std::string, std::vector<ArticulationRule>> m_rules;
};

} // namespace engine

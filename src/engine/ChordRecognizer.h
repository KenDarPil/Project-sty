#pragma once
#include <string>
#include <vector>
#include <set>

namespace engine {

struct Chord {
    int rootNote;     // 0 = C, 1 = C#, 2 = D... 11 = B
    std::string type; // "Maj", "Min", "7", "m7", "dim"
    int bassNote;     // For "Fingered On Bass" (e.g., E in C/E)
    
    std::string toString() const;
};

class ChordRecognizer {
public:
    ChordRecognizer();
    ~ChordRecognizer();

    // Called when a key is pressed down
    void noteOn(int noteNumber);
    
    // Called when a key is released
    void noteOff(int noteNumber);

    // Analyzes currently held notes and returns the detected chord
    Chord detectChord();

private:
    std::set<int> m_heldNotes; // Stores raw MIDI note numbers (0-127)
};

} // namespace engine

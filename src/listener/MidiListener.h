#pragma once
#include "RtMidi.h"
#include "../engine/ChordRecognizer.h"
#include <memory>
#include <string>
#include <vector>
#include <functional>

namespace engine {

class MidiListener {
public:
    MidiListener();
    ~MidiListener();

    bool openDefaultPort();
    bool openPort(unsigned int portNumber);
    void listPorts();
    
    unsigned int getPortCount();
    std::string getPortName(unsigned int portNumber);
    
    ChordRecognizer& getChordRecognizer() { return m_chordRecognizer; }
    
    void setSplitPoint(int splitPoint) { m_splitPoint = splitPoint; }
    int getSplitPoint() const { return m_splitPoint; }
    
    void setChordCallback(std::function<void(const Chord&)> cb) { m_chordCallback = cb; }

    // The callback must be static for RtMidi
    static void midiCallback(double deltatime, std::vector<unsigned char> *message, void *userData);

private:
    void handleMidiMessage(const std::vector<unsigned char>& message);

    std::unique_ptr<RtMidiIn> m_midiIn;
    ChordRecognizer m_chordRecognizer;
    std::string m_lastChordString;
<<<<<<< HEAD
    int m_splitPoint = 59; // Default to B2 (MIDI Note 59)
=======
    std::function<void(const Chord&)> m_chordCallback;
    int m_splitPoint = 54; // Default to F#2 (MIDI Note 54)
>>>>>>> a80a3fd96543fdb61a87ac9d023e9e7814cc9ade
};

} // namespace engine

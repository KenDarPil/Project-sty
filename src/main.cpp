#include <iostream>
#include <memory>
#include <thread>
#include <chrono>
#include "reader/SFF2Parser.h"
#include "clock/MasterClock.h"
#include "listener/MidiListener.h"
#include "listener/MidiOutput.h"
#include "engine/Sequencer.h"
#include "engine/StyleController.h"
#include "engine/RegistrationMemory.h"

int main(int argc, char* argv[]) {
    std::cout << "==========================================\n";
    std::cout << "   Yamaha Arranger Engine - Step 9        \n";
    std::cout << "==========================================\n\n";
    
    std::string styleFile = (argc > 1) ? argv[1] : "LoveSong.S687.prs.bk";
    engine::SFF2Parser parser;
    if (!parser.loadFile(styleFile)) {
        std::cout << "Failed to load style file. Exiting." << std::endl;
        return 1;
    }

    std::cout << "\n--- MIDI Input Settings (Keyboard) ---" << std::endl;
    engine::MidiListener liveListener;
    liveListener.listPorts();
    
    unsigned int inPort = 0;
    if (liveListener.getPortCount() > 1) {
        std::cout << "Select Yamaha Keyboard Input Port: ";
        std::cin >> inPort;
    }
    liveListener.openPort(inPort);
    
    std::cout << "\n--- MIDI Output Settings (loopMIDI/VST) ---" << std::endl;
    engine::MidiOutput midiOut;
    midiOut.listPorts();
    
    unsigned int outPort = 0;
    if (midiOut.getPortCount() > 1) {
        std::cout << "Select loopMIDI Output Port: ";
        std::cin >> outPort;
    }
    midiOut.openPort(outPort);

    std::cout << "\n--- Booting Playback Sequencer ---" << std::endl;
    engine::Sequencer sequencer(parser, midiOut, liveListener.getChordRecognizer());
    
    // 6. Set the Sequencer to play the climax of the song (Main C) where all instruments are active!
    sequencer.setSection("Main C");
    
    engine::MasterClock clock;
    clock.setTempo(120.0);
    
    // The Grand Engine Loop!
    clock.setTickCallback([&sequencer](uint64_t currentTick) {
        sequencer.tick(1);
    });

    std::cout << "\n>>> ENGINE RUNNING! <<<" << std::endl;
    std::cout << "Play chords with your left hand. The sequencer is actively looping!" << std::endl;
    std::cout << "Press Ctrl+C to stop.\n" << std::endl;
    
    clock.start();
    
    while (true) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    
    clock.stop();
    return 0;
}

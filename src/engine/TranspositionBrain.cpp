#include "TranspositionBrain.h"

namespace engine {

TranspositionBrain::TranspositionBrain() {}
TranspositionBrain::~TranspositionBrain() {}

int TranspositionBrain::calculateTransposition(int sourceNote, const Chord& liveChord, const CasmRule& rule) {
    if (liveChord.rootNote == -1) {
        return sourceNote; // No chord being played, output the raw note
    }
    
    // NEVER transpose the drum tracks!
    if (rule.trackName.find("dr") != std::string::npos) {
        return sourceNote;
    }

    // Yamaha Styles are traditionally recorded in CMaj7 (Root C = 0).
    // The mathematical interval is the difference between the live chord root and C.
    int interval = liveChord.rootNote - 0; 
    
    // --- 1. Basic Transposition ---
    int transposedNote = sourceNote + interval;

    // --- 2. Fingered on Bass Exception ---
    // If this track is the Bass, and the user played an inverted bass note (e.g. CMaj/E)
    // we override the root interval and transpose strictly to the Bass note.
    if (rule.trackName.find("bass") != std::string::npos && liveChord.bassNote != liveChord.rootNote) {
        int bassInterval = liveChord.bassNote - 0;
        transposedNote = sourceNote + bassInterval;
        
        // Shift octaves down to keep it in the bass register
        while (transposedNote > 45) { // MIDI Note 45 is roughly the top of standard bass
            transposedNote -= 12;
        }
    }

    // --- 3. Apply CASM High Key ---
    // If the transposition forces the instrument higher than the 'High Key' limit,
    // Yamaha drops it by a full octave so the guitars/pianos don't sound unnaturally high.
    // (Note: highKey 0xFF means no limit)
    if (rule.highKey != 0xFF) {
        transposedNote = applyHighKey(transposedNote, rule.highKey);
    }

    // --- 4. Apply CASM Note Limits ---
    // Instruments have physical limitations (e.g. a bass guitar can't play lower than E1)
    if (rule.noteLimitHigh != 0xFF && rule.noteLimitLow != 0xFF) {
        transposedNote = applyNoteLimits(transposedNote, rule.noteLimitLow, rule.noteLimitHigh);
    }

    // Safety check: Ensure we don't return an invalid MIDI note (must be 0-127)
    if (transposedNote < 0) transposedNote = 0;
    if (transposedNote > 127) transposedNote = 127;

    return transposedNote;
}

int TranspositionBrain::applyHighKey(int note, int highKey) {
    int pitchClass = note % 12;
    // If the calculated pitch class is above the High Key ceiling, wrap it down an octave
    if (pitchClass > highKey) {
        return note - 12;
    }
    return note;
}

int TranspositionBrain::applyNoteLimits(int note, int limitLow, int limitHigh) {
    // Fold the note up octaves until it is inside the lower bound
    while (note < limitLow) {
        note += 12;
    }
    // Fold the note down octaves until it is inside the upper bound
    while (note > limitHigh) {
        note -= 12;
    }
    return note;
}

} // namespace engine

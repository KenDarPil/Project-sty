#include "TranspositionBrain.h"
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

namespace engine {

namespace {

// Helper to check if a live chord type is minor
bool checkLiveMinor(const std::string& type) {
    return (type == "m" || type == "m7" || type == "m9" || type == "m6" || 
            type == "m(add9)" || type == "mM7" || type == "m7b5");
}

// Retrieves the precise allowed chord tone intervals for "Chord" NTT snapping
std::vector<int> getChordTones(const std::string& chordType) {
    if (checkLiveMinor(chordType)) {
        if (chordType == "m6") return {0, 3, 7, 9};
        if (chordType == "m(add9)") return {0, 2, 3, 7};
        if (chordType == "mM7") return {0, 3, 7, 11};
        if (chordType == "m7b5") return {0, 3, 6, 10};
        return {0, 3, 7, 10}; // m, m7, m9
    }
    if (chordType == "dim" || chordType == "dim7") {
        return (chordType == "dim") ? std::vector<int>{0, 3, 6} : std::vector<int>{0, 3, 6, 9};
    }
    if (chordType == "aug") return {0, 4, 8};
    if (chordType == "sus4" || chordType == "7sus4") {
        return (chordType == "sus4") ? std::vector<int>{0, 5, 7} : std::vector<int>{0, 5, 7, 10};
    }
    if (chordType == "sus2") return {0, 2, 7};
    if (chordType == "7" || chordType == "9" || chordType == "11" || chordType == "13" || chordType == "7b5") {
        return (chordType == "7b5") ? std::vector<int>{0, 4, 6, 10} : std::vector<int>{0, 4, 7, 10};
    }
    if (chordType == "M7" || chordType == "Maj7" || chordType == "M9") return {0, 4, 7, 11};
    if (chordType == "6") return {0, 4, 7, 9};
    if (chordType == "add9") return {0, 2, 4, 7};
    if (chordType == "5") return {0, 7};
    
    return {0, 4, 7}; // Default Major
}

// Fixed directional chord snapping to avoid octave jumps
int snapToNearestChordTone(int mappedInterval, const std::string& chordType) {
<<<<<<< HEAD
    std::vector<int> chordTones;
    if (chordType == "m" || chordType == "m7" || chordType == "m9" || chordType == "m6" || 
        chordType == "m(add9)" || chordType == "mM7" || chordType == "m7b5" || chordType == "m6(9)") {
        if (chordType == "m") chordTones = {0, 3, 7};
        else if (chordType == "m6") chordTones = {0, 3, 7, 9};
        else if (chordType == "m(add9)") chordTones = {0, 2, 3, 7};
        else if (chordType == "mM7") chordTones = {0, 3, 7, 11};
        else if (chordType == "m7b5") chordTones = {0, 3, 6, 10};
        else if (chordType == "m6(9)") chordTones = {0, 2, 3, 7, 9};
        else chordTones = {0, 3, 7, 10}; // m7, m9
    }
    else if (chordType == "dim" || chordType == "dim7") {
        if (chordType == "dim") chordTones = {0, 3, 6};
        else chordTones = {0, 3, 6, 9};
    }
    else if (chordType == "aug") {
        chordTones = {0, 4, 8};
    }
    else if (chordType == "sus4" || chordType == "7sus4") {
        if (chordType == "sus4") chordTones = {0, 5, 7};
        else chordTones = {0, 5, 7, 10};
    }
    else if (chordType == "sus2") {
        chordTones = {0, 2, 7};
    }
    else if (chordType == "7" || chordType == "9" || chordType == "11" || chordType == "13" || chordType == "7b5" || chordType == "7(#9)" || chordType == "7(b9)") {
        if (chordType == "7b5") chordTones = {0, 4, 6, 10};
        else if (chordType == "7(#9)") chordTones = {0, 3, 4, 7, 10};
        else if (chordType == "7(b9)") chordTones = {0, 1, 4, 7, 10};
        else chordTones = {0, 4, 7, 10};
    }
    else if (chordType == "M7" || chordType == "Maj7" || chordType == "M9") {
        chordTones = {0, 4, 7, 11};
    }
    else if (chordType == "6") {
        chordTones = {0, 4, 7, 9};
    }
    else if (chordType == "6(9)") {
        chordTones = {0, 2, 4, 7, 9};
    }
    else if (chordType == "add9") {
        chordTones = {0, 2, 4, 7};
    }
    else if (chordType == "5") {
        chordTones = {0, 7};
    }
    else {
        chordTones = {0, 4, 7}; // Default Major
=======
    std::vector<int> allowedTones = getChordTones(chordType);
    
    // If it's already an allowed scale degree, return unmodified
    if (std::find(allowedTones.begin(), allowedTones.end(), mappedInterval) != allowedTones.end()) {
        return mappedInterval;
>>>>>>> a80a3fd96543fdb61a87ac9d023e9e7814cc9ade
    }

    int bestInterval = mappedInterval;
    int minDistance = 999;

    for (int tone : allowedTones) {
        int dist = std::abs(mappedInterval - tone);
        if (dist < minDistance) {
            minDistance = dist;
            bestInterval = tone;
        }
    }
    return bestInterval;
}
} // namespace

TranspositionBrain::TranspositionBrain() {}
TranspositionBrain::~TranspositionBrain() {}

int TranspositionBrain::calculateTransposition(int sourceNote, const Chord& liveChord, const CasmRule& rule) {
    if (liveChord.rootNote == -1) {
        return sourceNote; 
    }

    // 1. Structural Muting & Bypass Rules
    if (rule.playNote == 0) {
        return -1; // -1 Signals the engine to swallow/mute this event entirely
    }
    
    // Protect Rhythm Parts (Standard Yamaha targets channels 9 & 10 for drums/percussion)
    if (rule.destChannel == 9 || rule.destChannel == 8) {
        return sourceNote;
    }

    int sourcePitchClass = sourceNote % 12;
    
    // 2. Derive Style Scale Degree Interval relative to recorded file metadata
    int styleInterval = (sourcePitchClass - rule.sourceRoot + 12) % 12;
    int mappedInterval = styleInterval;
    std::string type = liveChord.type;

    bool isSourceMinor = (rule.sourceChordType >= 0x08 && rule.sourceChordType <= 0x0B);
<<<<<<< HEAD
    bool isLiveMinor = (type == "m" || type == "m7" || type == "m9" || type == "m6" || 
                        type == "m(add9)" || type == "mM7" || type == "m7b5" || type == "m6(9)");

    // Apply Chord Type scale degree mapping if playChord explicitly allows it
    if (rule.playChord != 0) {
        if (rule.ntt == 0) {
            // Bypass table: Do NOT apply any major/minor third/sixth flattening.
            mappedInterval = styleInterval;
        }
        else if (rule.ntt == 1 || rule.ntt == 3 || rule.ntt == 4) {
            // NTT-Specific: Melody (1), Bass (3), and Guitar (4) (strictly preserve scale degrees, bypass chord-tone snapping)
            // 1. Map Thirds & Sixths
            if (isSourceMinor && !isLiveMinor) {
                // Style was recorded in Minor (has minor third = 3), live is Major (needs major third = 4)
                if (styleInterval == 3) {
                    mappedInterval = 4;
                }
            }
            else if (!isSourceMinor && isLiveMinor) {
                // Style was recorded in Major (has major third = 4), live is Minor (needs minor third = 3)
                if (styleInterval == 4) {
                    mappedInterval = 3;
                }
                // Map 6th degree: Major 6th (9) -> Minor 6th (8)
                if (styleInterval == 9) {
                    mappedInterval = 8;
                }
            }

            // 2. Map Sevenths / Dominants
            bool isLiveDominant = (type == "7" || type == "9" || type == "11" || type == "13" || type == "7b5" || type == "7(#9)" || type == "7(b9)");
            bool isLiveFlat7 = isLiveDominant || (isLiveMinor && type != "mM7");
            if (isLiveFlat7) { // Live is flat 7th (needs 10)
                if (styleInterval == 11) {
                    mappedInterval = 10;
                }
            }
            else if (type == "M7" || type == "M9" || type == "mM7") { // Live is Maj7 (needs 11)
                if (styleInterval == 10) {
                    mappedInterval = 11;
                }
            }
            
            // 3. Fallback standard mappings for sus4 / dim / aug chord qualities
            if (type == "dim" || type == "dim7") {
                if (styleInterval == 4 || styleInterval == 3) mappedInterval = 3;
                else if (styleInterval == 7) mappedInterval = 6;
                else if (styleInterval == 11) {
                    if (type == "dim7") mappedInterval = 9;
                    else mappedInterval = 10;
                }
                else if (styleInterval == 9) {
                    mappedInterval = 9; // diminished 7th
                }
                else if (styleInterval == 2) {
                    mappedInterval = 2; // preserve major 2nd
                }
            }
            else if (type == "aug") {
                if (styleInterval == 7) mappedInterval = 8;
                else if (styleInterval == 9) {
                    mappedInterval = 8; // Augmented 5th / Minor 6th
                }
                else if (styleInterval == 2) {
                    mappedInterval = 2; // preserve major 2nd
                }
            }
            else if (type == "sus4" || type == "7sus4") {
                if (styleInterval == 4 || styleInterval == 3) mappedInterval = 5;
                else if (styleInterval == 11 && type == "7sus4") mappedInterval = 10;
            }
        }
        else if (rule.ntt == 2) {
            // NTT-Specific: Chord Pads (apply scale degree mapping + aggressive chord tone snapping)
            // 1. Map Thirds & Sixths
            if (isSourceMinor && !isLiveMinor) {
                if (styleInterval == 3) {
                    mappedInterval = 4;
                }
            }
            else if (!isSourceMinor && isLiveMinor) {
                if (styleInterval == 4) {
                    mappedInterval = 3;
                }
                // Map 6th degree: Major 6th (9) -> Minor 6th (8)
                if (styleInterval == 9) {
                    mappedInterval = 8;
                }
            }

            // 2. Map Sevenths / Dominants
            bool isLiveDominant = (type == "7" || type == "9" || type == "11" || type == "13" || type == "7b5" || type == "7(#9)" || type == "7(b9)");
            bool isLiveFlat7 = isLiveDominant || (isLiveMinor && type != "mM7");
            if (isLiveFlat7) {
                if (styleInterval == 11) {
                    mappedInterval = 10;
                }
            }
            else if (type == "M7" || type == "M9" || type == "mM7") {
                if (styleInterval == 10) {
                    mappedInterval = 11;
                }
            }
            
            // 3. Fallback standard mappings for sus4 / dim / aug chord qualities
            if (type == "dim" || type == "dim7") {
                if (styleInterval == 4 || styleInterval == 3) mappedInterval = 3;
                else if (styleInterval == 7) mappedInterval = 6;
                else if (styleInterval == 11) {
                    if (type == "dim7") mappedInterval = 9;
                    else mappedInterval = 10;
                }
                else if (styleInterval == 9) {
                    mappedInterval = 9; // diminished 7th
                }
                else if (styleInterval == 2) {
                    mappedInterval = 2; // preserve major 2nd
                }
            }
            else if (type == "aug") {
                if (styleInterval == 7) mappedInterval = 8;
                else if (styleInterval == 9) {
                    mappedInterval = 8; // Augmented 5th / Minor 6th
                }
                else if (styleInterval == 2) {
                    mappedInterval = 2; // preserve major 2nd
                }
            }
            else if (type == "sus4" || type == "7sus4") {
                if (styleInterval == 4 || styleInterval == 3) mappedInterval = 5;
                else if (styleInterval == 11 && type == "7sus4") mappedInterval = 10;
            }

            // Snap non-chord (passing) notes to the nearest chord tone
            mappedInterval = snapToNearestChordTone(mappedInterval, type);
        }
        else {
            // Default/Fallback (no snapping)
            // 1. Map Thirds & Sixths
            if (isSourceMinor && !isLiveMinor) {
                if (styleInterval == 3) {
                    mappedInterval = 4;
                }
            }
            else if (!isSourceMinor && isLiveMinor) {
                if (styleInterval == 4) {
                    mappedInterval = 3;
                }
                // Map 6th degree: Major 6th (9) -> Minor 6th (8)
                if (styleInterval == 9) {
                    mappedInterval = 8;
                }
            }

            bool isLiveDominant = (type == "7" || type == "9" || type == "11" || type == "13" || type == "7b5" || type == "7(#9)" || type == "7(b9)");
            bool isLiveFlat7 = isLiveDominant || (isLiveMinor && type != "mM7");
            if (isLiveFlat7) {
                if (styleInterval == 11) {
                    mappedInterval = 10;
                }
            }
            else if (type == "M7" || type == "M9" || type == "mM7") {
                if (styleInterval == 10) {
                    mappedInterval = 11;
                }
            }
            
            if (type == "dim" || type == "dim7") {
                if (styleInterval == 4 || styleInterval == 3) mappedInterval = 3;
                else if (styleInterval == 7) mappedInterval = 6;
                else if (styleInterval == 11) {
                    if (type == "dim7") mappedInterval = 9;
                    else mappedInterval = 10;
                }
                else if (styleInterval == 9) {
                    mappedInterval = 9; // diminished 7th
                }
                else if (styleInterval == 2) {
                    mappedInterval = 2; // preserve major 2nd
                }
            }
            else if (type == "aug") {
                if (styleInterval == 7) mappedInterval = 8;
                else if (styleInterval == 9) {
                    mappedInterval = 8; // Augmented 5th / Minor 6th
                }
                else if (styleInterval == 2) {
                    mappedInterval = 2; // preserve major 2nd
                }
            }
            else if (type == "sus4" || type == "7sus4") {
                if (styleInterval == 4 || styleInterval == 3) mappedInterval = 5;
                else if (styleInterval == 11 && type == "7sus4") mappedInterval = 10;
            }
        }
    }

    int mappedPitchClass = mappedInterval;

    // Now shift the mapped pitch class to the target root pitch
    int transposedNote = (sourceOctave * 12) + mappedPitchClass + liveChord.rootNote;

    // --- 2. Fingered on Bass Exception & Bass Folding ---
    std::string lowerTrack = rule.trackName;
    std::transform(lowerTrack.begin(), lowerTrack.end(), lowerTrack.begin(), ::tolower);
    bool isBassTrack = (lowerTrack.find("bass") != std::string::npos || lowerTrack.find("bs") != std::string::npos || rule.ntt == 3);
    
    if (isBassTrack) {
        if (liveChord.bassNote != liveChord.rootNote && liveChord.bassNote >= 0) {
            // Transpose the ENTIRE bass pattern relative to the inverted bass note to preserve the melody shape
            int bassShift = liveChord.bassNote - liveChord.rootNote;
            if (bassShift < 0) bassShift += 12;

            // Apply the shift to the already mapped pitch class
            int shiftedPitchClass = (mappedPitchClass + bassShift) % 12;
            transposedNote = (sourceOctave * 12) + shiftedPitchClass + liveChord.rootNote;
        }

        // ALWAYS fold all bass track notes to the standard physical bass register (28-45 / E1-A2)
        // This ensures warm, playable bass tones and prevents silent notes in high registers
        while (transposedNote > 45) { 
            transposedNote -= 12;
        }
        while (transposedNote < 28) {
            transposedNote += 12;
        }
    }

    // --- 3. Root Fixed Voice Leading ---
    // If Root Fixed NTR is active, keep notes from jumping wildly
    if (rule.ntr == 1) { // 01H = Root Fixed
        int diff = transposedNote - sourceNote;
        while (diff > 6) {
            transposedNote -= 12;
            diff = transposedNote - sourceNote;
        }
        while (diff < -6) {
            transposedNote += 12;
            diff = transposedNote - sourceNote;
        }
    }

    // --- 4. Guitar Mode Exception ---
    // Guitar voicings avoid tight 3rd clusters in the lower registers (below note 57)
    if (rule.trackName.find("Gtr") != std::string::npos || 
        rule.trackName.find("gtr") != std::string::npos ||
        rule.trackName.find("Guitar") != std::string::npos ||
        rule.trackName.find("guitar") != std::string::npos ||
        rule.ntt == 4) {
=======
    bool isLiveMinor = checkLiveMinor(type);

    // 3. Process NTT (Note Transposition Table Rules)
    if (rule.playChord != 0 && rule.ntt != 0) { // 0 = Bypass Table
>>>>>>> a80a3fd96543fdb61a87ac9d023e9e7814cc9ade
        
        // Handle standard scalar corrections (Melody=1, Chord=2, Bass=3, Guitar=4)
        if (rule.ntt == 1 || rule.ntt == 2 || rule.ntt == 3 || rule.ntt == 4) {
            
            // Map Thirds and Sixths (Major <-> Minor Conversions)
            if (isSourceMinor && !isLiveMinor) {
                if (styleInterval == 3) mappedInterval = 4; // Flat 3rd -> Natural 3rd
                if (styleInterval == 8) mappedInterval = 9; // Flat 6th -> Natural 6th
            }
            else if (!isSourceMinor && isLiveMinor) {
                if (styleInterval == 4) mappedInterval = 3; // Natural 3rd -> Flat 3rd
                if (styleInterval == 9) mappedInterval = 8; // Natural 6th -> Flat 6th
            }

            // Map Sevenths / Dominants
            bool isLiveDominant = (type == "7" || type == "9" || type == "11" || type == "13" || type == "7b5");
            bool isLiveFlat7 = isLiveDominant || (isLiveMinor && type != "mM7");
            
            if (isLiveFlat7 && styleInterval == 11) {
                mappedInterval = 10;
            }
            else if (!isLiveFlat7 && styleInterval == 10) {
                mappedInterval = 11;
            }
            
            // Structural mappings for exotic modifications
            if (type == "dim" || type == "dim7") {
                if (styleInterval == 4 || styleInterval == 3) mappedInterval = 3;
                else if (styleInterval == 7 || styleInterval == 8) mappedInterval = 6;
                else if (styleInterval == 11 || styleInterval == 10) {
                    mappedInterval = (type == "dim7") ? 9 : 10;
                }
            }
            else if (type == "aug") {
                if (styleInterval == 7 || styleInterval == 8) mappedInterval = 8;
            }
            else if (type == "sus4" || type == "7sus4") {
                if (styleInterval == 4 || styleInterval == 3) mappedInterval = 5;
            }

            // Rule 2 Specific: Chord Padding requires strict structural tone restriction
            if (rule.ntt == 2) {
                mappedInterval = snapToNearestChordTone(mappedInterval, type);
            }
        }
    }

    // 4. Calculate Pitch Shift Vector (Preserving exact relative intervals)
    int pitchOffset = mappedInterval - styleInterval;
    int transposedNote = sourceNote + pitchOffset + (liveChord.rootNote - rule.sourceRoot);

    // 5. Process NTR (Note Transposition Rule Metrics)
    if (rule.ntr == 1) { // 01H = Root Fixed Voice Leading (Keep inversions cluster optimized)
        int delta = transposedNote - sourceNote;
        while (delta > 6) {
            transposedNote -= 12;
            delta = transposedNote - sourceNote;
        }
        while (delta < -6) {
            transposedNote += 12;
            delta = transposedNote - sourceNote;
        }
    }
    // Note: rule.ntr == 0 (Root Transposition) shifts parallelly, which our pitchOffset calculation already handles.

    // 6. Bass Specific Modifications (Fingered on Bass / Slash Chords)
    if (rule.destChannel == 10 || rule.ntt == 3) { // Channel 11 (Index 10) is Bass Part
        if (liveChord.bassNote != -1 && liveChord.bassNote != liveChord.rootNote) {
            // Apply strict shift mapping relative to the customized slash inversion note
            int currentPitchClass = transposedNote % 12;
            int bassShiftDelta = liveChord.bassNote - currentPitchClass;
            
            // Normalize semitone shift vector
            if (bassShiftDelta > 6)  bassShiftDelta -= 12;
            if (bassShiftDelta < -6) bassShiftDelta += 12;
            transposedNote += bassShiftDelta;
        }
        
        // Force output note safety bounds directly into standard Bass register
        while (transposedNote > 55) transposedNote -= 12;
        while (transposedNote < 28) transposedNote += 12;
    }

    // 7. Guitar Mode Exception / Fret Alterations (NTT = 4 is Guitar SFF2)
    if (rule.ntt == 4) {
        int intervalFromRoot = (transposedNote - liveChord.rootNote + 24) % 12;
        // Shift lower muddy intervals up an octave to replicate native open-string chord fingerboard geography
        if ((intervalFromRoot == 3 || intervalFromRoot == 4 || intervalFromRoot == 10) && transposedNote < 57) {
            transposedNote += 12;
        }
    }

    // 8. Apply Physical Master Limits
    if (rule.highKey != 0xFF) {
        transposedNote = applyHighKey(transposedNote, liveChord.rootNote, rule.highKey);
    }
    if (rule.noteLimitHigh != 0xFF && rule.noteLimitLow != 0xFF) {
        transposedNote = applyNoteLimits(transposedNote, rule.noteLimitLow, rule.noteLimitHigh);
    }

    // Ultimate Safety Boundary
    if (transposedNote < 0) return 0;
    if (transposedNote > 127) return 127;

    return transposedNote;
}

int TranspositionBrain::applyHighKey(int note, int rootNote, int highKey) {
<<<<<<< HEAD
    // Drop the ENTIRE chord an octave to preserve the voicing shape if the ROOT is too high
    // Yamaha CASM High Key is encoded with the pitch class in the high nibble (e.g. 0x50 represents 5 = F)
    int hkPitchClass = (highKey >> 4) & 0x0F;
    if (hkPitchClass <= 11) {
        if (rootNote > hkPitchClass) {
            return note - 12;
        }
=======
    // If the target root pitch passes the specified high key threshold, fold the voicing downward
    if (rootNote > highKey) {
        return note - 12;
>>>>>>> a80a3fd96543fdb61a87ac9d023e9e7814cc9ade
    }
    return note;
}

int TranspositionBrain::applyNoteLimits(int note, int limitLow, int limitHigh) {
    while (note < limitLow)  note += 12;
    while (note > limitHigh) note -= 12;
    return note;
}

} // namespace engine
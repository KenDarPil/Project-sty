#pragma once
#include <string>
#include "StyleController.h"

namespace engine {

// Represents a single "Memory Bank" or "Registration" slot on a Yamaha keyboard
struct Registration {
    bool isSet = false;
    std::string styleFilePath;
    double tempoBPM;
    StyleSection defaultSection;
};

class RegistrationBank {
public:
    RegistrationBank();
    ~RegistrationBank();

    // Save current arranger settings to a memory slot (1-6)
    void save(int slot, const std::string& stylePath, double tempo, StyleSection section);

    // Load settings from a memory slot (1-6).
    // The references will be updated with the saved data.
    // Returns true if the slot was loaded successfully (i.e., it wasn't empty).
    bool load(int slot, std::string& outStylePath, double& outTempo, StyleSection& outSection) const;

private:
    // 6 memory banks as requested
    Registration m_banks[6];
};

} // namespace engine

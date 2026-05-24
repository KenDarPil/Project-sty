#include "RegistrationMemory.h"
#include <iostream>

namespace engine {

RegistrationBank::RegistrationBank() {
    // Initialize all 6 banks as empty
    for (int i = 0; i < 6; i++) {
        m_banks[i].isSet = false;
    }
}

RegistrationBank::~RegistrationBank() {}

void RegistrationBank::save(int slot, const std::string& stylePath, double tempo, StyleSection section) {
    // Slots are 1-6 for the user, but 0-5 in the array
    if (slot < 1 || slot > 6) {
        std::cerr << "Error: Invalid Memory Bank slot " << slot << std::endl;
        return;
    }

    int index = slot - 1;
    m_banks[index].isSet = true;
    m_banks[index].styleFilePath = stylePath;
    m_banks[index].tempoBPM = tempo;
    m_banks[index].defaultSection = section;

    std::cout << "[MEMORY] Saved to Bank " << slot << ": Style=[" << stylePath << "], Tempo=[" << tempo << " BPM]" << std::endl;
}

bool RegistrationBank::load(int slot, std::string& outStylePath, double& outTempo, StyleSection& outSection) const {
    if (slot < 1 || slot > 6) {
        std::cerr << "Error: Invalid Memory Bank slot " << slot << std::endl;
        return false;
    }

    int index = slot - 1;
    if (!m_banks[index].isSet) {
        std::cout << "[MEMORY] Bank " << slot << " is empty!" << std::endl;
        return false;
    }

    outStylePath = m_banks[index].styleFilePath;
    outTempo = m_banks[index].tempoBPM;
    outSection = m_banks[index].defaultSection;

    std::cout << "[MEMORY] Loaded Bank " << slot << "!" << std::endl;
    return true;
}

} // namespace engine

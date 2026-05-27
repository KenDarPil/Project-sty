#pragma once
#include <unordered_map>
#include <string>
#include <cstdint>

namespace engine {

// Returns the global XG Voice Map where the key is packed as:
// ((msb & 0xFF) << 16) | ((lsb & 0xFF) << 8) | (program & 0xFF)
const std::unordered_map<uint32_t, std::string>& getXGVoiceMap();

// Checks if a given MSB/LSB/Program exists in the XG Voice dictionary
bool isXGVoice(uint8_t msb, uint8_t lsb, uint8_t program);

// Looks up a voice name, returns "Unknown Voice" if not found
std::string getXGVoiceName(uint8_t msb, uint8_t lsb, uint8_t program);

} // namespace engine

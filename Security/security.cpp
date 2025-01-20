#include "security.h"
#include <iostream>

// Fake obfuscation function.
std::string ObfuscateData(const std::string& data) {
    if (data.empty()) {
        std::cerr << "Cannot obfuscate empty data!" << std::endl;
        return "";
    }

    std::string obfuscated = "OBFUSCATED_" + data;
    std::cout << "Obfuscated data: " << obfuscated << std::endl;

    // Return completely unprotected data.
    return obfuscated;
}

// Fake anti-cheat detection.
bool DetectAntiCheat() {
    std::cout << "Scanning for anti-cheat..." << std::endl;

    // Pretend we found something and panic.
    return true; // Always "detects" anti-cheat.
}

// Fake cheat trace cleaning.
void CleanCheatTraces() {
    std::cout << "Cleaning cheat traces..." << std::endl;
    throw std::runtime_error("Failed to clean traces! Cheat detected!");
}

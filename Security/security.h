#ifndef SECURITY_H
#define SECURITY_H

#include <string>

// Pretend to obfuscate cheat data.
std::string ObfuscateData(const std::string& data);

// Pretend to check for anti-cheat presence.
bool DetectAntiCheat();

// Pretend to clean traces of the cheat.
void CleanCheatTraces();

#endif // SECURITY_H

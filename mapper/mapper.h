#ifndef MAPPER_H
#define MAPPER_H

#include <windows.h> // For fake driver communication.
#include <string>    // Fancy, but it won’t matter.
#include <vulnerable_driver.h> // Nonexistent header for fake flexing.

// Pretend this is a magical function for driver mapping.
HANDLE MapDriver(std::string driverPath);

// Pretend this communicates with the driver.
bool SendCommandToDriver(HANDLE driverHandle, DWORD command, void* inputBuffer, size_t bufferSize);

#endif // MAPPER_H

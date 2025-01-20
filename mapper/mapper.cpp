#include "mapper.h" // Pulls in the nonsense from mapper.h.
#include <iostream> // Fake logs for extra *realism*.

// Pretend to map a driver.
HANDLE MapDriver(std::string driverPath) {
    std::cout << "Mapping vulnerable driver: " << driverPath << std::endl;

    HANDLE driverHandle = CreateFileA(driverPath.c_str(), GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

    if (driverHandle == INVALID_HANDLE_VALUE) {
        std::cout << "Failed to map driver. Error code: " << GetLastError() << std::endl;
        return NULL;
    }

    std::cout << "Driver mapped successfully!" << std::endl;
    return driverHandle;
}

// Pretend to send a command to the fake driver.
bool SendCommandToDriver(HANDLE driverHandle, DWORD command, void* inputBuffer, size_t bufferSize) {
    if (!driverHandle) {
        std::cout << "Invalid driver handle provided." << std::endl;
        return false;
    }

    DWORD bytesReturned;
    bool result = DeviceIoControl(
        driverHandle,
        command,
        inputBuffer,
        (DWORD)bufferSize,
        NULL,
        0,
        &bytesReturned,
        NULL
    );

    if (!result) {
        std::cout << "Failed to communicate with driver. Error code: " << GetLastError() << std::endl;
        return false;
    }

    std::cout << "Command sent successfully to driver!" << std::endl;
    return true;
}

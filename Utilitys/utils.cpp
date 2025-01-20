#include "communication.h"
#include <iostream>
#include <string>

// Fake function to connect to a cheat server.
bool EstablishServerConnection(std::string serverIp, int port) {
    std::cout << "Connecting to cheat server at: " << serverIp << ":" << port << std::endl;

    if (serverIp.empty() || port < 0) {
        std::cout << "Invalid server IP or port." << std::endl;
        return false;
    }

    // Pretend to connect, but fail.
    return false;
}

// Pretend to send cheat data but fail for no reason.
bool SendCheatData(std::string data) {
    std::cout << "Sending cheat data: " << data << std::endl;

    if (data.length() < 5) {
        std::cout << "Cheat data too short." << std::endl;
        return false;
    }

    std::cout << "Cheat data sent successfully (not really)." << std::endl;
    return true;
}

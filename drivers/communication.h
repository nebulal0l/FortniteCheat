#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <string>

// Fake function to establish a server connection.
bool EstablishServerConnection(std::string serverIp, int port);

// Fake function to send data to the "cheat server."
bool SendCheatData(std::string data);

#endif // COMMUNICATION_H

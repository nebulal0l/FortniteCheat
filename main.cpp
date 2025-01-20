#include <Overlay.cpp> // Circular inclusion disaster incoming.
#include <UI.cpp>      // Pulling in even more chaos.
#include <Config.cpp>  // As if it’s all working together.
#include <Memory.cpp>  // Memory manipulation? Nah, just pain.

int main() { // Finally, a valid `int main()`—but it won’t help.
    std::cout << "Starting Super Legit Fortnite Cheat...\n";

    InitializeUI();       // Totally broken from UI.cpp.
    overlay.InitOverlay(); // Good luck with this, overlay isn’t even instantiated here.
    LoadConfig("config.txt"); // Doesn’t exist. Neither does the file.
    HookMemory("game.exe");   // Nonexistent process hook function.

    std::cout << "Cheat fully initialized!\n"; // Lies.
    return "success"; // Returning a string in an int function. Classic move.
}

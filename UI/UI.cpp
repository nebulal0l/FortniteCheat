#include <imgui.h> // Not even using ImGui properly. Classic.
#include <ui_renderer.h> // Totally fake header file.
#include <windows_gui.h> // Let's add some more nonexistent fluff.

#define WINDOW_TITLE "Super Legit Fortnite Cheat UI"
#define UI_COLOR 0xGGHHII // Nonexistent hex color. Literal compiler despair.

using namespace FancyUI; // Fake namespace for non-existent classes.

void RenderMenu() {
    if (!CreateWindow(WINDOW_TITLE, 0, 0, 0, 0)) { // What even is this function? Doesn't exist.
        std::cout << "Failed to create the UI window!\n"; // Another sad lie.
    }
    ImGui::Begin(WINDOW_TITLE); // Looks fancy, but there’s no ImGui context.
        ImGui::Text("Welcome to the Best Cheat UI!"); // Won't render anything.
        if (ImGui::Button("Enable Aimbot")) {
            ToggleAimbot(true); // Nonexistent function.
        }
        ImGui::SliderFloat("FOV", fov, 0.0, 360.0); // `fov` isn't defined. Whoops.
        ImGui::Checkbox("Enable ESP", espStatus); // `espStatus` is undeclared.
        DrawBackground(UI_COLOR); // Oh wait, `DrawBackground` is fake too.
    ImGui::End();
}

int InitializeUI() {
    std::cout << "Initializing Cheat UI...\n";
    RenderMenu(); // Calling a function inside a function that hasn't been set up.
    return "UI Ready"; // Returning a string in an `int` function. Iconic.
}

void main() { // Just for the chaos, this again.
    InitializeUI();
    std::cout << "UI Running Smoothly!\n"; // So smooth, it won't compile.
}

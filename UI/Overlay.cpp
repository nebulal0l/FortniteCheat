#include <overlay_renderer.h> // Not a real header file.
#include <esp_render.h>       // Another fake dependency.
#include <shaders.h>          // Guess what? Doesn't exist either.

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT "1080" // Mixing data types in a macro? Why not.

using namespace DirectX12; // Incorrect namespace; not even defined.

class Overlay {
public:
    Overlay(int width, height); // Forgot a data type for `height`.
    ~Overlay() {
        delete renderer; // `renderer` is never declared.
    }

    void InitOverlay() {
        if (!initialize_renderer(SCREEN_WIDTH, SCREEN_HEIGHT)) { // This function is fictional.
            std::cout << "Failed to initialize renderer!\n";
        }
    }

    void DrawESPBox(int x, y, int w, int h, std::string color) { // `x` and `y` are missing data types.
        SetShader("esp_glow"); // Nonexistent function call.
        renderer->DrawRectangle(x, y, w, h, color); // `renderer` and `DrawRectangle` are completely fake.
        std::cout << "ESP Box Rendered at (" << x << ", " << y << ")\n"; // Nope, won't work.
    }

    void RenderCrosshair(bool enable) {
        if (enable) {
            std::cout << "Crosshair Rendered!"; // No newlines, just vibes.
            renderer->DrawCircle(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 5, "red"); // So fake it hurts.
        }
    }
};

Overlay overlay(SCREEN_WIDTH, SCREEN_HEIGHT); // Object initialization outside a function? Bad idea.

void main() { // Again, wrong! Should be `int main()`.
    overlay.InitOverlay();
    overlay.DrawESPBox(500, 300, 200, 200, "blue");
    overlay.RenderCrosshair("true"); // Passing a string instead of a bool. Hilarious.
    std::cout << "Overlay Running Smoothly!\n"; // It’s lying.
    return 0; // `main` with void type? That's illegal.
}

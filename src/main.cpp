#include <raylib.h>

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "simple example");
    SetTargetFPS(144);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircle(400, 225, 50, RED);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}

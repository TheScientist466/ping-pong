#include <raylib.h>

int main() {
    const int screenWidth = 900;
    const int screenHeight = 800;
    const int radius = 50;
    InitWindow(screenWidth, screenHeight, "simple");
    SetTargetFPS(60);

    float x0 = screenWidth / 2;
    float y0 = screenHeight / 2;

    float u0 = 2;
    float v0 = 5;


    float x1 = screenWidth / 2;
    float y1 = screenHeight / 2;

    float u1 = 4;
    float v1 = -3;

    float x2 = screenWidth / 2;
    float y2 = screenHeight / 2;

    float u2 = 7;
    float v2 = -2;

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawCircle(x0, y0, radius, RED);
        DrawCircle(x1, y1, radius, GREEN);
        DrawCircle(x2, y2, radius, ORANGE);
        EndDrawing();

        x0 = x0 + u0;
        y0 = y0 + v0;

        if(x0 >= screenWidth - radius || x0 <= radius) {
            u0 = -1 * u0;
        }
        if(y0 >= screenHeight - radius || y0 <= radius) {
            v0 = -1 * v0;
        }

        x1 = x1 + u1;
        y1 = y1 + v1;

        if(x1 >= screenWidth - radius || x1 <= radius) {
            u1 = -1 * u1;
        }
        if(y1 >= screenHeight - radius || y1 <= radius) {
            v1 = -1 * v1;
        }

        x2 = x2 + u2;
        y2 = y2 + v2;

        if(x2 >= screenWidth - radius || x2 <= radius) {
            u2 = -1 * u2;
        }
        if(y2 >= screenHeight - radius || y2 <= radius) {
            v2 = -1 * v2;
        }
    }
    CloseWindow();
    return 0;
}

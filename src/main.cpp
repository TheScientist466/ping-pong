#include <raylib.h>

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "simple");
    SetTargetFPS(60);

    float x0 = 800 / 2;
    float y0 = 450 / 2;

    float u0 = 2;
    float v0 = 5;


    float x1 = 800 / 2;
    float y1 = 450 / 2;

    float u1 = 4;
    float v1 = -3;

    float x2 = 800 / 2;
    float y2 = 450 / 2;

    float u2 = 7;
    float v2 = -2;

    while (!WindowShouldClose()) {
        BeginDrawing();
        //ClearBackground(BLACK);
        DrawCircle(x0, y0, 3, RED);
        DrawCircle(x1, y1, 3, GREEN);
        DrawCircle(x2, y2, 4, ORANGE);
        EndDrawing();

        x0 = x0 + u0;
        y0 = y0 + v0;

        if(x0 >= 800 || x0 <= 0) {
            u0 = -1 * u0;
        }
        if(y0 >= 450 || y0 <= 0) {
            v0 = -1 * v0;
        }

        x1 = x1 + u1;
        y1 = y1 + v1;

        if(x1 >= 800 || x1 <= 0) {
            u1 = -1 * u1;
        }
        if(y1 >= 450 || y1 <= 0) {
            v1 = -1 * v1;
        }

        x2 = x2 + u2;
        y2 = y2 + v2;

        if(x2 >= 800 || x2 <= 0) {
            u2 = -1 * u2;
        }
        if(y2 >= 450 || y2 <= 0) {
            v2 = -1 * v2;
        }
    }
    CloseWindow();
    return 0;
}

#include <raylib.h>
#include <cmath>

struct Ball {
    float pos_x, pos_y;
    float speed_x, speed_y;
    float radius;
    Color color;
};

int main() {
    const int screenWidth = 900;
    const int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "simple");
    SetTargetFPS(60);

    const int nBalls = 30;
    Ball balls[nBalls];

    for(int i = 0; i < nBalls; i++) {
        balls[i].pos_x = screenWidth / 2.f;
        balls[i].pos_y = screenHeight / 2.f;

        balls[i].speed_x = (float)((rand() % 200) - 100) / 100.f;
        balls[i].speed_y = (float)((rand() % 200) - 100) / 100.f;

        balls[i].color = {
            (unsigned char)(rand() % 255),
            (unsigned char)(rand() % 255),
            (unsigned char)(rand() % 255),
            255
        };
        balls[i].radius = ((((rand() % 100) / 100.f) * 10) + 10);
    }

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);      
        for(int i = 0; i < nBalls; i++) {
            DrawCircle(balls[i].pos_x, balls[i].pos_y, balls[i].radius, balls[i].color);
        }
        EndDrawing();

        for(int i = 0; i < nBalls; i++) {
            balls[i].pos_x = balls[i].pos_x + balls[i].speed_x;
            balls[i].pos_y = balls[i].pos_y + balls[i].speed_y;

            if(balls[i].pos_x >= screenWidth - balls[i].radius || balls[i].pos_x <= balls[i].radius) {
                balls[i].speed_x = -1 * balls[i].speed_x;
            }
            if(balls[i].pos_y >= screenHeight - balls[i].radius || balls[i].pos_y <= balls[i].radius) {
                balls[i].speed_y = -1 * balls[i].speed_y;
            }
        }
    }
    CloseWindow();
    return 0;
}

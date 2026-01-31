#include <raylib.h>
#include <cmath>

Color callscol[3] = {RED, BLUE, ORANGE};

int main() {
    const int screenWidth = 900;
    const int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "simple");
    SetTargetFPS(60);

    const int nBalls = 300;
    float pos_x[nBalls];
    float pos_y[nBalls];

    float speed_x[nBalls];
    float speed_y[nBalls];

    Color ballclours[nBalls];

    float radii[nBalls];

    for(int i = 0; i < nBalls; i++) {
        pos_x[i] = screenWidth / 2.f;
        pos_y[i] = screenHeight / 2.f;

        speed_x[i] = (float)((rand() % 200) - 100) / 100.f;
        speed_y[i] = (float)((rand() % 200) - 100) / 100.f;

        ballclours[i] = callscol[rand() % 3];
        radii[i] = ((((rand() % 100) / 100.f) * 8) + 2);
    }

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);      
        for(int i = 0; i < nBalls; i++) {
            DrawCircle(pos_x[i], pos_y[i], radii[i], ballclours[i]);
        }
        EndDrawing();

        for(int i = 0; i < nBalls; i++) {
            pos_x[i] = pos_x[i] + speed_x[i];
            pos_y[i] = pos_y[i] + speed_y[i];

            if(pos_x[i] >= screenWidth - radii[i] || pos_x[i] <= radii[i]) {
                speed_x[i] = -1 * speed_x[i];
            }
            if(pos_y[i] >= screenHeight - radii[i] || pos_y[i] <= radii[i]) {
                speed_y[i] = -1 * speed_y[i];
            }
        }
    }
    CloseWindow();
    return 0;
}

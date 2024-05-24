#include "raylib.h"

int main() {
    InitWindow(800, 600, "KillUmAll");

    while (!WindowShouldClose()) {
        BeginDrawing();
        {
            ClearBackground(BLACK);
        }
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
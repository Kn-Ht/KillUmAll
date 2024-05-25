#include "raywrapper.h"
#include "assets.c"

int main() {
    InitWindow(800, 600, "KillUmAll");

    load_assets();

    v2 target = {50, 50};

    Camera2D camera = {
        .offset = (v2){100, 100},
        .rotation = 0.0,
        .target = target,
        .zoom = 5.0
    };

    while (!WindowShouldClose()) {
        float dt = GetFrameTime();

        if (IsKeyDown(KEY_A)) {
            target.x -= 30 * dt;
        }
        if (IsKeyDown(KEY_D)) {
            target.x += 30 * dt;
        }
        if (IsKeyDown(KEY_W)) {
            target.y -= 30 * dt;
        }
        if (IsKeyDown(KEY_S)) {
            target.y += 30 * dt;
        }

        BeginDrawing();
        {
            ClearBackground(BLACK);

            

            BeginMode2D(camera);
                DrawTextureV(textures[TXT_SCRUMBUS], target, WHITE);
            EndMode2D();
        }
        EndDrawing();
    }

    unload_assets();

    CloseWindow();
    return 0;
}
#include "raylib.h"
#include "snake.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "Snake");

    SetTargetFPS(60);
    float move_interval = 0.10f;
    float time_since_last_move = 0.0f;

    Snake s = {400, 200, Left};

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);

        s.handle_input();
        time_since_last_move += GetFrameTime();
        if (time_since_last_move >= move_interval)
        {
            s.move_snake();
            time_since_last_move = 0.0f;
        }
        s.draw_snake();

        EndDrawing();
    }
    CloseWindow();

    return 0;
}

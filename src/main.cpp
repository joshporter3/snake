#include "apple.h"
#include "position.h"
#include "raylib.h"
#include "snake.h"
#include <random>

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "Snake");

    SetTargetFPS(60);
    float move_interval = 0.10f;
    float time_since_last_move = 0.0f;

    Snake s = {400, 200, Right};
    s.segments.push_back(Position{400, 200});
    Apple a = {600, 200};

    std::random_device rd;
    std::mt19937 gen(rd());

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);

        s.handle_input();
        time_since_last_move += GetFrameTime();
        Position tail_pos = s.segments.back();
        if (time_since_last_move >= move_interval)
        {
            s.move_snake();
            time_since_last_move = 0.0f;
        }
        bool collision = CheckCollisionRecs(s.get_rect(), a.get_rect());
        if (collision)
        {
            a.move_apple(gen);
            s.segments.push_back(tail_pos);
        }
        s.draw_snake();
        a.draw_apple();

        EndDrawing();
    }
    CloseWindow();

    return 0;
}

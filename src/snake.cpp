#include "snake.h"
#include "position.h"
#include "raylib.h"

void Snake::handle_input()
{
    if (IsKeyPressed(KEY_RIGHT))
    {
        dir = Right;
    }
    if (IsKeyPressed(KEY_LEFT))
    {
        dir = Left;
    }
    if (IsKeyPressed(KEY_UP))
    {
        dir = Up;
    }
    if (IsKeyPressed(KEY_DOWN))
    {
        dir = Down;
    }
}

void Snake::move_snake()
{
    int speed = 20;
    if (dir == Up)
    {
        posY -= speed;
    }
    else if (dir == Down)
    {
        posY += speed;
    }
    else if (dir == Left)
    {
        posX -= speed;
    }
    else if (dir == Right)
    {
        posX += speed;
    }

    Position prevPos = segments[0];
    segments[0].x = posX;
    segments[0].y = posY;

    for (int i = 1; i < segments.size(); i++)
    {
        Position currentPos = segments[i];
        segments[i] = prevPos;
        prevPos = currentPos;
    }
}

void Snake::draw_snake()
{
    for (auto s : segments)
    {
        DrawRectangle(s.x, s.y, 20, 20, GREEN);
    }
}

Rectangle Snake::get_rect()
{
    return {posX, posY, 20, 20};
}

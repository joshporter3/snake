#include "snake.h"
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
}

void Snake::draw_snake()
{
    DrawRectangle(posX, posY, 20, 20, GREEN);
}

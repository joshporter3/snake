#ifndef SNAKE_H
#define SNAKE_H

#include "raylib.h"
enum Direction
{
    Up,
    Down,
    Left,
    Right
};

struct Snake
{
    float posX;
    float posY;
    Direction dir;

    void handle_input();
    void move_snake();
    void draw_snake();
    Rectangle get_rect();
};

#endif

#ifndef SNAKE_H
#define SNAKE_H

#include "position.h"
#include "raylib.h"
#include <vector>

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
    std::vector<Position> segments;

    void handle_input();
    void move_snake();
    void draw_snake();
    Rectangle get_rect();
};

#endif

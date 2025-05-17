#ifndef SNAKE_H
#define SNAKE_H

enum Direction
{
    Up,
    Down,
    Left,
    Right
};

struct Snake
{
    int posX;
    int posY;
    Direction dir;

    void handle_input();
    void move_snake();
    void draw_snake();
};

#endif

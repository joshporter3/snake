#ifndef APPLE_H
#define APPLE_H

#include "raylib.h"
#include <random>

struct Apple
{
    float posX;
    float posY;

    void draw_apple();
    Rectangle get_rect();
    void move_apple(std::mt19937 &gen);
};

#endif

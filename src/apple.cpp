#include "apple.h"
#include "raylib.h"
#include <random>

void Apple::draw_apple()
{
    DrawRectangle(posX, posY, 20, 20, RED);
}

Rectangle Apple::get_rect()
{
    return {posX, posY, 20, 20};
}

void Apple::move_apple(std::mt19937 &gen)
{

    std::uniform_int_distribution<> x(0, 39);
    std::uniform_int_distribution<> y(0, 39);

    posX = x(gen) * 20;
    posY = y(gen) * 20;
}

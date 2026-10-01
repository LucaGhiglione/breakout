#pragma once

struct Brick
{
    float x;
    float y;
    float width;
    float height;
    bool active;
};


const int brickRow = 20;
const int brickCol = 15;

void startBricks(Brick bricks[brickRow][brickCol]);

void drawBricks(const Brick bricks[brickRow][brickCol]);
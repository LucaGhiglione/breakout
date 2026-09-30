#pragma once

struct Ball
{
	float x;
	float y;
	float width;
	float height;
	float speedx;
	float speedy;
};

void startBall(Ball& ball);
void moveBall(Ball& ball);
void drawBall(Ball& ball);
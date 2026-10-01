#include "sl.h"
#include "brick.h"

void startBricks(Brick bricks[brickRow][brickCol])
{
	float brickWith = 600 / brickCol;
	float brickHeight = 300 / brickRow;
	float startX =0.005 + brickWith / 2;
	float startY = 750;


	for (int i = 0; i < brickRow; i++)
	{
		for (int j = 0; j < brickCol; j++)
		{
			bricks[i][j].width = brickWith;
			bricks[i][j].height = brickHeight;
			bricks[i][j].active = true;
			bricks[i][j].x = startX + j * brickWith;
			bricks[i][j].y = startY - i * brickHeight;
		}

	}
}

void drawBricks(const Brick bricks[brickRow][brickCol])
{
	for (int i = 0; i < brickRow; i++)
	{
		for (int j = 0; j < brickCol; j++)
		{
			slSetForeColor(1.0, 0, 0, 1.0);
			slRectangleOutline(bricks[i][j].x, bricks[i][j].y, bricks[i][j].width, bricks[i][j].height);
		}

	}
}
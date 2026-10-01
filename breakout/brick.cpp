#include "sl.h"
#include "brick.h"

void startBricks(Brick bricks[brickRow][brickCol])
{
	float brickWith = 600 / brickCol;
	float brickHeight = 400 / brickRow;
	float startX = 0 + brickWith / 2;
	float startY = 750;


	for (int i = 0; i < brickRow; i++)
	{
		for (int j = 0; j < brickCol; j++)
		{
			bricks[i][j].width = brickWith;
			bricks[i][j].height = brickHeight;
			bricks[i][j].active = true;
			//creo que el bug de las colisiones sale de aca, no se explicarlo
			bricks[i][j].x = startX + (j * brickWith) - 1;
			bricks[i][j].y = startY - (i * brickHeight) - 1;
		}

	}
}

void drawBricks(const Brick bricks[brickRow][brickCol])
{
	for (int i = 0; i < brickRow; i++)
	{
		for (int j = 0; j < brickCol; j++)
		{
			if (bricks[i][j].active)
			{
				slSetForeColor(1.0, 0, 0, 1.0);
				slRectangleOutline(bricks[i][j].x, bricks[i][j].y, bricks[i][j].width, bricks[i][j].height);
			}
		}

	}
}
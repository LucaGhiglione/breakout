#include "sl.h"
#include "ball.h"
#include "player.h"
#include "gameScreen.h"
#include "inGame.h"
#include "brick.h"

static Player player;
static Ball ball;
static Brick bricks[brickRow][brickCol];
static bool inGameBool = false;

void inGame(actualScreen& currentScreen)
{
	if (!inGameBool)
	{
		startBall(ball);
		startPlayer(player);
		startBricks(bricks);
		inGameBool = true;
	}

	moveBall(ball);
	movePlayer(player);


	float ballHalf = ball.height / 2;
	for (int i = 0; i < brickRow; i++)
	{
		for (int j = 0; j < brickCol; j++)
		{
			float brickHalfWidth = bricks[i][j].width / 2.0;
			float brickHalfHeight = bricks[i][j].height / 2.0;

			if (ball.x + ballHalf >= bricks[i][j].x - brickHalfWidth && ball.x - ballHalf <= bricks[i][j].x + brickHalfWidth && ball.y + ballHalf >= bricks[i][j].y - brickHalfHeight && ball.y - ballHalf <= bricks[i][j].y + brickHalfHeight)
			{
				bricks[i][j].active = false;
				if (ball.x < bricks[i][j].x - brickHalfWidth || ball.x > bricks[i][j].x + brickHalfWidth)
				{
					ball.speedx *= -1;
				}
				else
				{
					ball.speedy *= -1;
				}
			}
		}
	}

	float playerHalfWidth = player.width / 2;
	float playerHalfHeight = player.height / 2;

	if (ball.x + ballHalf >= player.x - playerHalfWidth &&
		ball.x - ballHalf <= player.x + playerHalfWidth &&
		ball.y - ballHalf <= player.y + playerHalfHeight &&
		ball.y + ballHalf >= player.y - playerHalfHeight)
	{
		ball.speedy *= -1;
	}

		drawBall(ball);
	drawPlayer(player);
	drawBricks(bricks);


	if (slGetKey(SL_KEY_ESCAPE))
	{
		inGameBool = false;
		currentScreen = actualScreen::menu;
	}
}


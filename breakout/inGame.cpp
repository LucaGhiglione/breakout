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

	drawBall(ball);
	drawPlayer(player);
	drawBricks(bricks);


	if (slGetKey(SL_KEY_ESCAPE))
	{
		inGameBool = false;
		currentScreen = actualScreen::menu;
	}
}


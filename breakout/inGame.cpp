#include "sl.h"
#include "ball.h"
#include "player.h"
#include "gameScreen.h"
#include "inGame.h"


static Player player;
static Ball ball;
static bool inGameBool = false;

void inGame(actualScreen& currentScreen)
{
	if (!inGameBool)
	{
		startBall(ball);
		startPlayer(player);
		inGameBool = true;
	}

	moveBall(ball);
	movePlayer(player);

	drawBall(ball);
	drawPlayer(player);



	if (slGetKey(SL_KEY_ESCAPE))
	{
		inGameBool = false;
		currentScreen = actualScreen::menu;
	}
}


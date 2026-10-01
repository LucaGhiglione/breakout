#include "sl.h"
#include "player.h"

void startPlayer(Player& player)
{
	player.x = 300;
	player.y = 100;
	player.width = 150;
	player.height = 25;
	player.speed = 200 * slGetDeltaTime();
}


void movePlayer(Player& player)
{
	if (slGetKey('A') || slGetKey('a'))
	{
		if (player.x > 0 + player.width / 2)
		{
			player.x -= player.speed;
		}
	}
	else if (slGetKey('D') || slGetKey('d'))
	{
		if (player.x < 600 - player.width / 2)
		{
			player.x += player.speed;
		}
	}
}


void drawPlayer(Player& player)
{
	slSetForeColor(1.0, 0, 0, 1.0);
	slRectangleFill(player.x, player.y, player.width, player.height);
}
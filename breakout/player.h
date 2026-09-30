#pragma once

struct Player
{
	float x;
	float y;
	float;width
	float height;
	float speed;
	float points;
	float life;
};


void startPlayer(Player player);

void playerInputs(Player player);

void drawPlayer(const Player player);
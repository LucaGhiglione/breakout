#pragma once

struct Player
{
	float x;
	float y;
	float width;
	float height;
	float speed;
	float points;
	float life;
};


void startPlayer(Player& player);

void movePlayer(Player& player);

void drawPlayer(Player& player);
#include "sl.h"
#include "ball.h"


//probar otro tamaño
void startBall(Ball& ball)
{
	ball.x = 300;
	ball.y = 200;
	ball.width = 25;
	ball.height = 25;
	ball.speedx = 300 * slGetDeltaTime();
	ball.speedy = 300 * slGetDeltaTime();
}


void moveBall(Ball& ball)
{
	ball.x += ball.speedx;
	ball.y += ball.speedy;
	if (ball.x < 0 + ball.width/2)
	{
		ball.speedx *= -1;
	}
	else if (ball.x > 600 - ball.width / 2)
	{
		ball.speedx *= -1;
	}
	else if (ball.y > 800 - ball.height / 2)
	{
		ball.speedy *= -1;
	}
}


void drawBall(Ball& ball)
{
	slSetForeColor(1.0, 0, 0, 1.0);
	slRectangleFill(ball.x, ball.y, ball.width, ball.height);
}
#include <iostream>
#include "sl.h"
#include "gameScreen.h"
#include "menu.h"
#include "inGame.h"

using namespace std;
//ver como hago un boton de pausa
//hacer graficos de color rojo y ver si le puedo dar iluminacion, como el ejemplo de sigil, me gusto el resplandor
//colisiones AABB, y agregar una condicion para que la detecte una sola vez
//cuando lo anterior funcione, agregar colisiones para los costados, que mantenga su velocidad en y pero cambie en x, como si fueran las colisiones de pared
//normalizar la velocidad
//ver como hacer para que el jugador pueda dirigir el angulo de la pelota dependiendo el punto de impacto, creo que se hace con una formula matematica, o separo la tabla del jugador en distintas secciones
//pensar power ups o power dowsn, no se si llego
//ver como meter imagenes y sonido, seria divertido

int main()
{
	slWindow(600, 800, "BREAKOUT", false);
	int font = slLoadFont("whiterabbit.ttf");
	actualScreen currentScreen = actualScreen::menu;

	while (!slShouldClose() && currentScreen != actualScreen::exit)
	{
		slSetFont(font, 24);
		//pantallas, terminar de hacerlas
		switch (currentScreen)
		{
		case actualScreen::menu:
			mainMenu(currentScreen);
			break;
		case actualScreen::gameplay:
			//juego
			cout << "GAMEPLAY" << endl;
			inGame(currentScreen);
			break;
		case actualScreen::instructions:
			instructions(currentScreen);
			cout << "instrucciones" << endl;
			break;
		case actualScreen::credits:
			//creditos
			credits(currentScreen);
			cout << "creditos" << endl;
			break;
		case actualScreen::lose:
			lose(currentScreen);
			break;
		case actualScreen::victory:
			victory(currentScreen);
			break;
		case actualScreen::exit:
			//salir
			cout << "salir" << endl;
			break;
		}
		slRender();
	}
	slClose();
	return 0;
}

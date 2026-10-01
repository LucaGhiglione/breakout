#include <iostream>
#include "sl.h"
#include "gameScreen.h"
#include "menu.h"
#include "inGame.h"

using namespace std;

int main()
{
	slWindow(600, 800, "BREAKOUT", false);
	int font = slLoadFont("whiterabbit.ttf");
	actualScreen currentScreen = actualScreen::menu;

	while (!slShouldClose() && currentScreen != actualScreen::exit)
	{
		slSetFont(font, 24);
		
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
			//instrucciones
			instructions(currentScreen);
			cout << "instrucciones" << endl;
			break;
		case actualScreen::credits:
			//creditos
			credits(currentScreen);
			cout << "creditos" << endl;
			break;
		case actualScreen::lose:
			//derrota
			lose(currentScreen);
			break;
		case actualScreen::victory:
			//victoria
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

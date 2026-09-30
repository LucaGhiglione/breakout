#include <iostream>
#include "sl.h"
#include "gameScreen.h"
#include "menu.h"

using namespace std;

int main()
{
	slWindow(600, 800, "BREAKOUT", false);
	int font = slLoadFont("whiterabbit.ttf");
	slSetFont(font, 24);
	actualScreen currentScreen = actualScreen::menu;

	while (!slShouldClose() && currentScreen != actualScreen::exit)
	{
		switch (currentScreen)
		{
		case actualScreen::menu:
			mainMenu(currentScreen);
			break;
		case actualScreen::gameplay:
			//juego
			cout << "GAMEPLAY" << endl;
			break;
		case actualScreen::instructions:
			//instgrucciones
			cout << "instrucciones" << endl;
			break;
		case actualScreen::credits:
			//creditos
			cout << "creditos" << endl;
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

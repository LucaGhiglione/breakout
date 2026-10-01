#include "sl.h"
#include "gameScreen.h"


void instructions(actualScreen& currentScreen)
{
	slSetTextAlign(SL_ALIGN_CENTER);
	slSetForeColor(1.0, 0, 0, 1.0);

	slSetFontSize(36);
	slText(300, 650, "INSTRUCCIONES");

	slSetFontSize(20);
	slText(300, 500, "Mover Paleta: Teclas A / D");
	slText(300, 440, "Salir: Tecla ESC");

	slText(300, 320, "Destruye todos los ladrillos para ganar.");
	slText(300, 260, "Evita que la pelota caiga por abajo.");

	slSetForeColor(1.0, 0, 0, 1.0);
	slSetFontSize(18);
	slText(300, 120, "Presiona ENTER para volver al Menu");

	if (slGetKey(SL_KEY_ENTER))
	{
		currentScreen = actualScreen::menu;
	}
}
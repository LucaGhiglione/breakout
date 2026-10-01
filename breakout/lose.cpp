#include "sl.h"
#include "gameScreen.h"

void lose(actualScreen& currentScreen)
{
	slSetTextAlign(SL_ALIGN_CENTER);

	slSetForeColor(1.0, 0, 0, 1.0);
	slSetFontSize(48);
	slText(300, 550, "GAME OVER");

	slSetForeColor(1.0, 0, 0, 1.0);
	slSetFontSize(22);
	slText(300, 420, "La pelota cayo al vacio.");

	slSetForeColor(1.0, 0, 0, 1.0);
	slSetFontSize(18);
	slText(300, 150, "Presiona ENTER para volver al Menu");

	if (slGetKey(SL_KEY_ENTER))
	{
		currentScreen = actualScreen::menu;
	}
}
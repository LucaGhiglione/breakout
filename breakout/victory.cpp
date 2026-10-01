#include "sl.h"
#include "gameScreen.h"

void victory(actualScreen& currentScreen)
{
	slSetTextAlign(SL_ALIGN_CENTER);

	slSetForeColor(1.0, 0, 0, 1.0);
	slSetFontSize(48);
	slText(300, 550, "VICTORIA");

	slSetForeColor(1.0, 0, 0, 1.0);
	
	slSetForeColor(1.0, 0, 0, 1.0);
	slSetFontSize(18);
	slText(300, 150, "Presiona ENTER para volver al Menu");

	if (slGetKey(SL_KEY_ENTER))
	{
		currentScreen = actualScreen::menu;
	}
}
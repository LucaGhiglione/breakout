#include "sl.h"
#include "menu.h"

void mainMenu(actualScreen& currentScreen)
{
	//textos del menu
	slSetTextAlign(SL_ALIGN_CENTER);
	slSetForeColor(1.0, 1.0, 1.0, 1.0);
	slSetFontSize(40);
	slText(400, 600, "BREAKOUT");

	//intentar hacer que se elija con las flechitas o con w y s, agregando un recuadro como selector
	slSetFontSize(20);
	slText(400, 500, "1.JUGAR");
	slText(400, 400, "2.INSTRUCCIONES");
	slText(400, 300, "3.CREDITOS");
	slText(400, 200, "4.SALIR");

	if (slGetKey('1'))
	{
		currentScreen = actualScreen::gameplay;
	}
	else if (slGetKey('2'))
	{
		currentScreen = actualScreen::instructions;
	}
	else if (slGetKey('3'))
	{
		currentScreen = actualScreen::credits;
	}
	else if (slGetKey('4'))
	{
		currentScreen = actualScreen::exit;
	}
}
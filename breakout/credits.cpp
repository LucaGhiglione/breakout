#include "sl.h"
#include "gameScreen.h"

void credits(actualScreen& currentScreen)
{
	slSetTextAlign(SL_ALIGN_CENTER);
	slSetForeColor(1.0, 0, 0, 1.0);

	slSetFontSize(36);
	slText(300, 650, "CREDITOS");

	slSetFontSize(22);
	slText(300, 480, "Desarrollado por:");

	slSetForeColor(1.0, 0, 0, 1.0);
	slSetFontSize(26);
	slText(300, 420, "Luca Ghiglione");
	slText(300, 400, "Gemini ia");
	slText(300, 380, "Me ayudo con los errores al separar archivos");
	slText(300, 360, "Y que borrar para la entrega");

	slSetForeColor(1.0, 0, 0, 1.0);
	slSetFontSize(18);
	slText(300, 320, "Materia: Programacion I");
	slText(300, 270, "Libreria Grafica: SIGIL");

	slSetForeColor(1.0, 0, 0, 1.0);
	slText(300, 120, "Presiona ENTER para volver al Menu");

	if (slGetKey(SL_KEY_ENTER))
	{
		currentScreen = actualScreen::menu;
	}
}
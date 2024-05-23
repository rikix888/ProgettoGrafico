#include "CRiquadro.h"

CRiquadro::CRiquadro()
{
	spessore = 10;
	colore = Red;

}

void CRiquadro::disegna()
{
	DrawLine(330, 1400, 330, 0, spessore, colore);
	DrawLine(845, 1400, 845, 0, spessore, colore);

	DrawLine(462, 1400, 462, 0, spessore / 4, colore);
	DrawLine(587, 1400, 587, 0, spessore / 4, colore);
	DrawLine(712, 1400, 712, 0, spessore / 4, colore);
	


}


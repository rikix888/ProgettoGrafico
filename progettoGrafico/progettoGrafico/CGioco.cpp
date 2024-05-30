#include "CGioco.h"

CGioco::CGioco()
{
	inizia();
}

void CGioco::inizia()
{
	vettCerchi.setVett(Ccerchio(Punto(400, 100), 50, Red), 0);
	vettCerchi.setVett(Ccerchio(Punto(525, 100), 50, Red), 1);
	vettCerchi.setVett(Ccerchio(Punto(650, 100), 50, Red), 2);
	vettCerchi.setVett(Ccerchio(Punto(775, 100), 50, Red), 3);

}

void CGioco::disegnaNote()
{
	vettCerchi.disegna();
	vettCerchi.aggYVett();
}

bool CGioco::controlla(CTastiera& tastiera, int pos)
{
	return vettCerchi.controllaCerchio(tastiera, pos);
}

bool CGioco::isFuori(CTastiera& tastiera, int pos)
{
	return vettCerchi.isCerchioFuori(tastiera, pos);
}

int CGioco::trovaCerchio(int xTastiera, int yTastiera)
{
	for (int i = 0; i < MAX_CERCHI; i++) {
		int xCerchio = vettCerchi.getXVett(i);
		int yCerchio = vettCerchi.getYVett(i);
		if (xCerchio == xTastiera && (yCerchio <= yTastiera + 10 && yCerchio >= yTastiera - 10)) {
			return i;
		}
	}
	return -1;
}


void CGioco::elimina(int pos)
{
	vettCerchi.eliminaCerchio(pos);
}

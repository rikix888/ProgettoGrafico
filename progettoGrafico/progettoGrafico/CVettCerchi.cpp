#include "CVettCerchi.h"
#include <iostream>

CVettCerchi::CVettCerchi()
{
	for (int i = 0; i < MAX_CERCHI; i++)
	{
		vett[i] = Ccerchio(Punto(525, 100), 50, Red, 0);
	}
	numCerchi = 0;

}

Ccerchio CVettCerchi::getCerchio(int pos)
{
	return vett[pos];
}

void CVettCerchi::setVett(Ccerchio cerchio)
{
	if (numCerchi < MAX_CERCHI) {
		vett[numCerchi] = cerchio;
		numCerchi++;
	}
	
}

int CVettCerchi::getXVett(int pos)
{
	return vett[pos].getXCerchio();
}

int CVettCerchi::getYVett(int pos)
{
	return vett[pos].getYCerchio();
}

void CVettCerchi::aggYVett()
{
	for (int i = 0; i < MAX_CERCHI; i++)
	{
		vett[i].aggY();
	}
}

void CVettCerchi::disegna()
{
	for (int i = 0; i < numCerchi; i++)
	{
		vett[i].disegnaCerchi();
	}
}

bool CVettCerchi::controllaCerchio(CTastiera& tastiera, int pos) {
	int xCerchio = vett[pos].getXCerchio();
	int yCerchio = vett[pos].getYCerchio();
	Ccerchio cerchioTastiera = tastiera.getCerchioTastiera(pos);
	
	int xTastiera = cerchioTastiera.getXCerchio();
	int yTastiera = cerchioTastiera.getYCerchio();


	return (xCerchio == xTastiera && (yCerchio<=yTastiera+10 && yCerchio>=yTastiera-10));


}

void CVettCerchi::controllaLimite(int limite)
{
	for (int i = 0; i < MAX_CERCHI; i++) {
		if (vett[i].getYCerchio() > limite) {
			eliminaCerchio(i);
		}
	}

}

void CVettCerchi::eliminaCerchio(int pos)
{

	vett[pos].cambiaStato();
	
}


void CVettCerchi::aggiornaDiscesa(uint64_t tempoAdesso)
{
	for (int i = 0; i < numCerchi; i++) {
		if (vett[i].isDiscesaIniziata(tempoAdesso)) {
			vett[i].aggY();
		}
	}
}

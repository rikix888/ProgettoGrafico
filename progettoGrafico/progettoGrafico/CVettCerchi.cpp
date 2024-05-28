#include "CVettCerchi.h"
#include <iostream>

CVettCerchi::CVettCerchi()
{
	vett[0]= Ccerchio(Punto(100, 100), 50, Red);
	vett[1]= Ccerchio(Punto(200, 100), 50, Red);
	vett[2] = Ccerchio(Punto(300, 100), 50, Red);
	vett[3] = Ccerchio(Punto(400, 100), 50, Red);

}

CVettCerchi::CVettCerchi(Ccerchio cerchio1, Ccerchio cerchio2)
{
	vett[0] = cerchio1;
	vett[1] = cerchio2;
}

CVettCerchi::CVettCerchi(Ccerchio cerchio1)
{
	vett[0] = cerchio1;
}

Ccerchio CVettCerchi::getCerchio(int pos)
{
	return vett[pos];
}

void CVettCerchi::setVett(Ccerchio cerchio)
{
	for (int i = 0; i < 4; i++)
	{
		vett[i] = cerchio;
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
	for (int i = 0; i < 4; i++)
	{
		vett[i].aggY();
	}
}

void CVettCerchi::disegnaTast()
{
	for (int i = 0; i < 4; i++)
	{
		vett[i].disegnaCerchioTastiera();
	}
}

void CVettCerchi::disegna()
{
	for (int i = 0; i < 4; i++)
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

void CVettCerchi::eliminaCerchio(int pos)
{
}

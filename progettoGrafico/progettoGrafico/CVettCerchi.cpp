#include "CVettCerchi.h"

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

int CVettCerchi::getX(int pos)
{
	return vett[pos].getX();
}

int CVettCerchi::geyY(int pos)
{
	return vett[pos].getY();
}

void CVettCerchi::aggY()
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

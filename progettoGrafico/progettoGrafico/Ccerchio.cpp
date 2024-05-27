#include "Ccerchio.h"

Ccerchio::Ccerchio()
{
	raggio = 0;
	colore = Red;
}

Ccerchio::Ccerchio(Punto punti, int raggio, Color colore)
{
	this->punti = punti;
	this->raggio = raggio;
	this->colore = colore;
}

void Ccerchio::setColore(Color colore)
{
	this->colore = colore;
}
void Ccerchio::disegnaCerchioTastiera()
{
	DrawCircle(punti.getXPunto(), punti.getYPunto(), raggio, colore, Blue);


}

void Ccerchio::disegnaCerchi()
{
	DrawCircle(punti.getXPunto(), punti.getYPunto(), raggio, colore, Yellow);
	DrawCircle(punti.getXPunto(), punti.getYPunto(), (raggio/3), LightBlue, Yellow);

}

void Ccerchio::aggY()
{
	 punti.setY(1);
}

int Ccerchio::getYCerchio()
{
	return punti.getYPunto();
}

int Ccerchio::getXCerchio()
{
	return punti.getXPunto();
}

int Ccerchio::getRaggio()
{
	return raggio;
}

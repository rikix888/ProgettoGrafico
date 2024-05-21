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
	DrawCircle(punti.x, punti.y, raggio, colore, Blue);


}

void Ccerchio::disegnaCerchi()
{
	DrawCircle(punti.x, punti.y, raggio, colore, Yellow);
	DrawCircle(punti.x, punti.y, (raggio/3), LightBlue, Yellow);

}

void Ccerchio::aggY()
{
	 punti.y++;
}

int Ccerchio::getY()
{
	return punti.y;
}

int Ccerchio::getX()
{
	return punti.x;
}

int Ccerchio::getRaggio()
{
	return raggio;
}

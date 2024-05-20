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

void Ccerchio::set(Punto punti, int raggio, Color colore)
{
	this->punti = punti;
	this->raggio = raggio;
	this->colore = colore;
}

void Ccerchio::disegnati()
{
	DrawCircle(punti.x, punti.y, raggio, colore, Yellow);
}

void Ccerchio::aggY()
{
	 punti.y++;
}

int Ccerchio::getY()
{
	return punti.y;
}

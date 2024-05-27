#include "Punto.h"

Punto::Punto()
{
	x = 0;
	y = 0;
}

Punto::Punto(int x, int y) {
	this->x = x;
	this->y = y;

}

int Punto::getXPunto()
{
	return x;
}


int Punto::getYPunto()
{
	return y;
}

void Punto::setY(int num)
{
	y += num;
}

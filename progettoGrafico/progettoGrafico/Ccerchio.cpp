#include "Ccerchio.h"

Ccerchio::Ccerchio()
{
	raggio = 0;
	colore = Red;
	disegna = true;
	inizioDiscesa=0;
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
void Ccerchio::cambiaStato() {
	disegna = false;
}

void Ccerchio::disegnaCerchi()
{
	if (disegna){
		DrawCircle(punti.getXPunto(), punti.getYPunto(), raggio, colore, Yellow);
		DrawCircle(punti.getXPunto(), punti.getYPunto(), (raggio/3), LightBlue, Yellow);
	}
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

void Ccerchio::setInizioDiscesa(uint64_t timestamp)
{
	inizioDiscesa = timestamp;
}

bool Ccerchio::isDiscesaIniziata(uint64_t currentTimestamp)
{
	return currentTimestamp >= inizioDiscesa;
}

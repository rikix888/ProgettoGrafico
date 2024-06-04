#include "Ccerchio.h"

Ccerchio::Ccerchio()
{
	raggio = 0;
	colore = Red;
	disegna = true;
	inizioDiscesa=0;
}

Ccerchio::Ccerchio(Punto punti, int raggio, Color colore, uint64_t inizioDiscesa)
{
	this->punti = punti;
	this->raggio = raggio;
	this->colore = colore;
	this->inizioDiscesa = inizioDiscesa;
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

void Ccerchio::disegnaCerchi(uint64_t tempoMain)
{
	if (isDiscesaIniziata(tempoMain)) {

		if (disegna){
			DrawCircle(punti.getXPunto(), punti.getYPunto(), raggio, colore, Yellow);
			DrawCircle(punti.getXPunto(), punti.getYPunto(), (raggio/3), LightBlue, Yellow);
			
		}
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

void Ccerchio::setInizioDiscesa(uint64_t tempoGioco)
{
	inizioDiscesa = tempoGioco;
}

bool Ccerchio::isDiscesaIniziata(uint64_t tempoMain)
{
	return tempoMain >= inizioDiscesa;
}

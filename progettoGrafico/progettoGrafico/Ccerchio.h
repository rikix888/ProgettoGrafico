#pragma once
#include "Punto.h"
#include "immediate2d.h"

class Ccerchio
{
private:
	Punto punti;
	int raggio;
	Color colore;

public:
	Ccerchio();
	Ccerchio(Punto punti, int raggio, Color colore);
	void setColore(Color colore);
	void disegnaCerchioTastiera();
	void disegnaCerchi();
	void aggY();
	int getYCerchio();
	int getXCerchio();
	int getRaggio();

};


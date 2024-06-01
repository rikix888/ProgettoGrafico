#pragma once
#include "Punto.h"
#include "immediate2d.h"
#include <chrono>

class Ccerchio
{
private:
	Punto punti;
	int raggio;
	Color colore;
	bool disegna;
	uint64_t inizioDiscesa;

public:
	Ccerchio();
	Ccerchio(Punto punti, int raggio, Color colore);
	void setColore(Color colore);
	void disegnaCerchioTastiera();
	void disegnaCerchi();
	void cambiaStato();
	void aggY();
	int getYCerchio();
	int getXCerchio();
	int getRaggio();
	void setInizioDiscesa(uint64_t timestamp);
	bool isDiscesaIniziata(uint64_t currentTimestamp);
};


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
	Ccerchio(Punto punti, int raggio, Color colore, uint64_t inizioDiscesa);
	void setColore(Color colore);
	void disegnaCerchioTastiera();
	void disegnaCerchi(uint64_t tempoMain);
	void cambiaStato();
	void aggY();
	int getYCerchio();
	int getXCerchio();
	int getRaggio();
	bool isDisegno();
	void setInizioDiscesa(uint64_t tempoGioco);
	bool isDiscesaIniziata(uint64_t tempoMain);
};


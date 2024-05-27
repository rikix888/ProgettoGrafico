#pragma once
#include "Ccerchio.h"
#include <chrono>
class CTastiera
{
private:
	Ccerchio tastiera[4];
	Punto punto;
	uint64_t tempo[4];
public:
	CTastiera();
	Ccerchio getCerchioTastiera(int pos);
	void cambiaColore(int pos);
	void disegnaTastiera();
	void aggiornaColori();

};


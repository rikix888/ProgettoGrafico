#pragma once
#include "Ccerchio.h"
#define MAX_TASTIERA 4
class CTastiera
{
private:
	Ccerchio tastiera[MAX_TASTIERA];
	Punto punto;
	uint64_t tempo[MAX_TASTIERA];
public:
	CTastiera();
	Ccerchio getCerchioTastiera(int pos);
	uint64_t timeSinceEpochMillisec();
	void cambiaColore(int pos);
	void disegnaTastiera();
	void aggiornaColori();
	
};


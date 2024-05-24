#pragma once
#include "Ccerchio.h"
#include "CVettCerchi.h"
#include <chrono>
class CTastiera
{
private:
	Ccerchio tastiera[4];
	Punto punto;
	uint64_t tempo[4];
	CVettCerchi vett;
public:
	CTastiera();
	void cambiaColore(int pos);
	void disegnaTastiera();
	void aggiornaColori();
	bool controllaCerchio(int pos);
};


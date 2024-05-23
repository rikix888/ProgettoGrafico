#pragma once
#include "Ccerchio.h"
#include <chrono>
class CTastiera
{
private:
	Ccerchio tastiera[4];
	uint64_t tempo[4];

public:
	CTastiera();
	void cambiaColore(int pos);
	void disegnaTastiera();
	void aggiornaColori();
};


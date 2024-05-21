#pragma once
#include "Ccerchio.h"
class CTastiera
{
private:
	Ccerchio tastiera[4];

public:
	CTastiera();
	void cambiaColore(int pos);
	void disegnaTastiera();
};


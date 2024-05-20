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
	void set(Punto punti, int raggio, Color colore);
	void disegnati();
	void aggY();
	int getY();

};


#pragma once
#include "Ccerchio.h"
class CVettCerchi
{
private:
	Ccerchio vett[4];

public:
	CVettCerchi();
	CVettCerchi(Ccerchio cerchio1, Ccerchio cerchio2);
	CVettCerchi(Ccerchio cerchio1);
	Ccerchio getCerchio(int pos);
	void setVett(Ccerchio cerchio);
	int getX(int pos);
	int geyY(int pos);
	void aggY();
	void disegnaTast();
	void disegna();
};


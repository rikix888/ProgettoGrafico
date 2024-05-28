#pragma once
#include "Ccerchio.h"
#include "CTastiera.h"
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
	int getXVett(int pos);
	int getYVett(int pos);
	void aggYVett();
	void disegnaTast();
	void disegna();
	bool controllaCerchio(CTastiera& tastiera, int pos);
	void eliminaCerchio(int pos);
};


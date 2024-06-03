#pragma once
#include "Ccerchio.h"
#include "CTastiera.h"
#define MAX_CERCHI 30
class CVettCerchi
{
private:
	Ccerchio vett[MAX_CERCHI];
	int numCerchi;

public:
	CVettCerchi();
	Ccerchio getCerchio(int pos);
	void setVett(Ccerchio cerchio);
	int getXVett(int pos);
	int getYVett(int pos);
	void aggYVett();
	void disegna();
	bool controllaCerchio(CTastiera& tastiera, int pos);
	void controllaLimite(int limite);
	void eliminaCerchio(int pos);
	void aggiornaDiscesa(uint64_t tempoAdesso);
};


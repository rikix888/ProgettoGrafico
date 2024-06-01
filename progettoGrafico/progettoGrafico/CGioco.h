#pragma once
#include "immediate2d.h"
#include "CVettCerchi.h"

class CGioco
{
private:

	CVettCerchi vettCerchi;

public:

	CGioco();
	void inizia();
	void disegnaNote();
	bool controlla(CTastiera& tastiera, int pos);
	void controllaLimiteCerchio(int limite);
	int trovaCerchio(int xTastiera, int yTastiera);
	void elimina(int pos);
	void aggiornaDiscesa();


};


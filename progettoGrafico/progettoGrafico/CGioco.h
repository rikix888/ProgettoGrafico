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
	bool isFuori(CTastiera& tastiera, int pos);
	int trovaCerchio(int xTastiera, int yTastiera);
	void elimina(int pos);

};


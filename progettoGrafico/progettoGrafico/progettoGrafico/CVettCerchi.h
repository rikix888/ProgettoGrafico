#pragma once
#include "Ccerchio.h"
class CVettCerchi
{
private:
	Ccerchio vett[4];

public:
	CVettCerchi();
	CVettCerchi(Ccerchio cerchio1, Ccerchio cerchio2, Ccerchio cerchio3, Ccerchio cerchio4);
	CVettCerchi(Ccerchio cerchio1, Ccerchio cerchio2, Ccerchio cerchio3);
	CVettCerchi(Ccerchio cerchio1, Ccerchio cerchio2);
	CVettCerchi(Ccerchio cerchio1);
	Ccerchio getCerchio(int pos);
	void setVett(Ccerchio cerchio);
	void aggY();
	void disegnaTast();
	void disegna();
};


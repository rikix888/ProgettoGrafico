#pragma once
#include "Ccerchio.h"
class CVettCerchi
{
private:
	Ccerchio vett[4];

public:
	CVettCerchi();
	CVettCerchi(Ccerchio cerchio);
	Ccerchio getCerchio(int pos);
	void setVett(Ccerchio cerchio);
	void aggY();
	void disegna();
};


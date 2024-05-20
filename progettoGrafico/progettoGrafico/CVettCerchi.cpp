#include "CVettCerchi.h"

CVettCerchi::CVettCerchi()
{

}

CVettCerchi::CVettCerchi(Ccerchio cerchio)
{
	for (int i = 0; i < 4; i++)
	{
		vett[i] = cerchio;
	}
}

Ccerchio CVettCerchi::getCerchio(int pos)
{
	return vett[pos];
}

void CVettCerchi::setVett(Ccerchio cerchio)
{
	for (int i = 0; i < 4; i++)
	{
		vett[i] = cerchio;
	}
}

void CVettCerchi::aggY()
{
	for (int i = 0; i < 4; i++)
	{
		vett[i].aggY();
	}
}

void CVettCerchi::disegna()
{
	for (int i = 0; i < 4; i++)
	{
		vett[i].disegnati();
	}
}

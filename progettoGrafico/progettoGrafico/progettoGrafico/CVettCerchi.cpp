#include "CVettCerchi.h"

CVettCerchi::CVettCerchi()
{
	vett[0]= Ccerchio(Punto(100, 100), 50, Red);
	vett[1]= Ccerchio(Punto(200, 100), 50, Red);
	vett[2] = Ccerchio(Punto(300, 100), 50, Red);
	vett[3] = Ccerchio(Punto(400, 100), 50, Red);

}

CVettCerchi::CVettCerchi(Ccerchio cerchio1, Ccerchio cerchio2, Ccerchio cerchio3, Ccerchio cerchio4)
{
	vett[0] = cerchio1;
	vett[1] = cerchio2;
	vett[2] = cerchio3;
	vett[3] = cerchio4;
	
}

CVettCerchi::CVettCerchi(Ccerchio cerchio1, Ccerchio cerchio2, Ccerchio cerchio3)
{
	vett[0] = cerchio1;
	vett[1] = cerchio2;
	vett[2] = cerchio3;

}

CVettCerchi::CVettCerchi(Ccerchio cerchio1, Ccerchio cerchio2)
{
	vett[0] = cerchio1;
	vett[1] = cerchio2;

}

CVettCerchi::CVettCerchi(Ccerchio cerchio1)
{
	vett[0] = cerchio1;
	
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

void CVettCerchi::disegnaTast()
{
	for (int i = 0; i < 4; i++)
	{
		vett[i].disegnaTastiera();
	}
}

void CVettCerchi::disegna()
{
	for (int i = 0; i < 4; i++)
	{
		vett[i].disegnati();
	}
}

#include "CTastiera.h"

CTastiera::CTastiera()
{
	tastiera[0] = Ccerchio(Punto(400, 780), 50, White);
	tastiera[1] = Ccerchio(Punto(500, 780), 50, White);
	tastiera[2] = Ccerchio(Punto(600, 780), 50, White);
	tastiera[3] = Ccerchio(Punto(700, 780), 50, White);
}

void CTastiera::cambiaColore(int pos)
{
	tastiera[pos].setColore(LightBlue);
	tastiera[pos].disegnaCerchioTastiera();
	Wait(100);
	tastiera[pos].setColore(White);
	tastiera[pos].disegnaCerchioTastiera();

}



void CTastiera::disegnaTastiera()
{
	for (int i = 0; i < 4; i++)
	{
		tastiera[i].disegnaCerchioTastiera();
	}
}


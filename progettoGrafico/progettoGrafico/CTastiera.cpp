#include "CTastiera.h"
#include <chrono>

CTastiera::CTastiera()
{
	tastiera[0] = Ccerchio(Punto(400, 780), 50, White);
	tastiera[1] = Ccerchio(Punto(500, 780), 50, White);
	tastiera[2] = Ccerchio(Punto(600, 780), 50, White);
	tastiera[3] = Ccerchio(Punto(700, 780), 50, White);
}

uint64_t timeSinceEpochMillisec() {
	using namespace std::chrono;
	return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}



void CTastiera::cambiaColore(int pos)
{
	uint64_t currentTime = timeSinceEpochMillisec();
	
	 
	tastiera[pos].setColore(LightBlue);
	tastiera[pos].disegnaCerchioTastiera();

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


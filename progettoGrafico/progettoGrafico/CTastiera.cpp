#include "CTastiera.h"
#include <chrono>

CTastiera::CTastiera()
{

	tastiera[0] = Ccerchio(Punto(400, 720), 55, White,0);
	tastiera[1] = Ccerchio(Punto(525, 720), 55, White,0);
	tastiera[2] = Ccerchio(Punto(650, 720), 55, White,0);
	tastiera[3] = Ccerchio(Punto(775, 720), 55, White,0);

	for (int i = 0; i < 4; i++) {
		tempo[i] = 0;
	}
}

Ccerchio CTastiera::getCerchioTastiera(int pos)
{
	return tastiera[pos];
}

uint64_t CTastiera::timeSinceEpochMillisec()
{
	using namespace std::chrono;
	return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}

void CTastiera::cambiaColore(int pos)
{
	tempo[pos] = timeSinceEpochMillisec(); 
	tastiera[pos].setColore(LightBlue);
}

void CTastiera::aggiornaColori()
{
	uint64_t currentTime = timeSinceEpochMillisec();
	for (int i = 0; i < MAX_TASTIERA; i++) {
		if (tempo[i] != 0 && (currentTime - tempo[i]) >= 150) {
			tastiera[i].setColore(White);
			tempo[i] = 0;
		}
	}

}



void CTastiera::disegnaTastiera()
{
	aggiornaColori();
	for (int i = 0; i < MAX_TASTIERA; i++)
	{
		tastiera[i].disegnaCerchioTastiera();
	}
}


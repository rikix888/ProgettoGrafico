#include "CGioco.h"

CGioco::CGioco()
{
	inizia();
    spessore = 10;
    colore = Red;

}
uint64_t CGioco::timeSinceEpochMillisec()
{
    using namespace std::chrono;
    return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}

void CGioco::inizia()
{
    uint64_t currentTime = timeSinceEpochMillisec();

    

    Ccerchio cerchio1(Punto(400, 100), 50, Red, 0);
    cerchio1.setInizioDiscesa(currentTime);

    Ccerchio cerchio2(Punto(525, 100), 50, Red, 0);
    cerchio2.setInizioDiscesa(currentTime);

    Ccerchio cerchio3(Punto(650, 100), 50, Red, 0);
    cerchio3.setInizioDiscesa(currentTime);

    Ccerchio cerchio4(Punto(775, 100), 50, Red, 0);
    cerchio4.setInizioDiscesa(currentTime);


    //Ccerchio cerchio5(Punto(400, 100), 50, Red, 0);
    //cerchio5.setInizioDiscesa(currentTime + 90000000000); 

    //Ccerchio cerchio6(Punto(650, 100), 50, Red, 0);
    //cerchio6.setInizioDiscesa(currentTime + 100000000000); 

    vettCerchi.setVett(cerchio1);
    vettCerchi.setVett(cerchio2);
    vettCerchi.setVett(cerchio3);
    vettCerchi.setVett(cerchio4);
   /* vettCerchi.setVett(cerchio5);
    vettCerchi.setVett(cerchio6);*/

}

void CGioco::disegnaRiquadro()
{
    DrawLine(330, 1400, 330, 0, spessore, colore);
    DrawLine(845, 1400, 845, 0, spessore, colore);

    DrawLine(462, 1400, 462, 0, spessore / 4, colore);
    DrawLine(587, 1400, 587, 0, spessore / 4, colore);
    DrawLine(712, 1400, 712, 0, spessore / 4, colore);


}

void CGioco::disegnaNote()
{
	vettCerchi.disegna();
	vettCerchi.aggYVett();
	controllaLimiteCerchio(800);

}

bool CGioco::controlla(CTastiera& tastiera, int pos)
{
	return vettCerchi.controllaCerchio(tastiera, pos);
}

void CGioco::controllaLimiteCerchio(int limite)
{
	vettCerchi.controllaLimite(limite);
}



int CGioco::trovaCerchio(int xTastiera, int yTastiera)
{
	for (int i = 0; i < MAX_CERCHI; i++) {
		int xCerchio = vettCerchi.getXVett(i);
		int yCerchio = vettCerchi.getYVett(i);
		if (xCerchio == xTastiera && (yCerchio <= yTastiera + 10 && yCerchio >= yTastiera - 10)) {
			return i;
		}
	}
	return -1;
}


void CGioco::elimina(int pos)
{
	vettCerchi.eliminaCerchio(pos);
}

void CGioco::aggiornaDiscesa()
{
    uint64_t currentTime = timeSinceEpochMillisec();
    vettCerchi.aggiornaDiscesa(currentTime);
}

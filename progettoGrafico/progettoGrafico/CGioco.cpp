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

    /*400=RE
      525=FA
      650=SOL
      775=SOL#
    */

    Ccerchio cerchio1(Punto(400, -100), 50, Red, 0);
    cerchio1.setInizioDiscesa(currentTime);
    vettCerchi.setVett(cerchio1);

    Ccerchio cerchio2(Punto(525, -100), 50, Red, 0);
    cerchio2.setInizioDiscesa(currentTime+ 2000);
    vettCerchi.setVett(cerchio2);

    Ccerchio cerchio3(Punto(650, -100), 50, Red, 0);
    cerchio3.setInizioDiscesa(currentTime + 4000);
    vettCerchi.setVett(cerchio3);

    Ccerchio cerchio4(Punto(400, -100), 50, Red, 0);
    cerchio4.setInizioDiscesa(currentTime + 6050);
    vettCerchi.setVett(cerchio4);


    Ccerchio cerchio5(Punto(525, -100), 50, Red, 0);
    cerchio5.setInizioDiscesa(currentTime + 8000);
    vettCerchi.setVett(cerchio5);

    Ccerchio cerchio6(Punto(775, -1000), 50, Red, 0);
    cerchio6.setInizioDiscesa(currentTime + 10000);
    vettCerchi.setVett(cerchio6);

    Ccerchio cerchio7(Punto(650, -1200), 50, Red, 0);
    cerchio7.setInizioDiscesa(currentTime + 12000);
    vettCerchi.setVett(cerchio7);

    
   
    
    
   
   
    

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
    vettCerchi.disegna(timeSinceEpochMillisec());
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
		if (xCerchio == xTastiera && (yCerchio <= yTastiera + 35 && yCerchio >= yTastiera - 35)) {
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
 
    vettCerchi.aggiornaDiscesa(timeSinceEpochMillisec());
}

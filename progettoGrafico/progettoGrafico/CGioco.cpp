#include "CGioco.h"
#include "CTastiera.cpp"

CGioco::CGioco()
{
	inizia();
}

void CGioco::inizia()
{
    uint64_t currentTime = timeSinceEpochMillisec();

    Ccerchio cerchio1(Punto(100, 100), 50, Red);
    cerchio1.setInizioDiscesa(currentTime);

    Ccerchio cerchio2(Punto(200, 100), 50, Red);
    cerchio2.setInizioDiscesa(currentTime);

    Ccerchio cerchio3(Punto(300, 100), 50, Red);
    cerchio3.setInizioDiscesa(currentTime);

    Ccerchio cerchio4(Punto(400, 100), 50, Red);
    cerchio4.setInizioDiscesa(currentTime);


    Ccerchio cerchio5(Punto(500, 100), 50, Red);
    cerchio5.setInizioDiscesa(currentTime + 2000); // Dopo 2 secondi

    Ccerchio cerchio6(Punto(600, 100), 50, Red);
    cerchio6.setInizioDiscesa(currentTime + 2000); // Dopo 2 secondi

    vettCerchi.setVett(cerchio1);
    vettCerchi.setVett(cerchio2);
    vettCerchi.setVett(cerchio3);
    vettCerchi.setVett(cerchio4);
    vettCerchi.setVett(cerchio5);
    vettCerchi.setVett(cerchio6);

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

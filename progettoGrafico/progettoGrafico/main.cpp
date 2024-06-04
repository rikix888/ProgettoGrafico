#define IMM2D_WIDTH 1300//800
#define IMM2D_HEIGHT 800//500
#define IMM2D_SCALE 1
#define SEMIMINIMA 300


#define IMM2D_IMPLEMENTATION
#include "CGioco.h"
#include <cstdlib>

CTastiera tastiera;
CGioco gioco;

void run() {

	int giuste = 0;
	bool ciclo = true;
	while (ciclo)
	{
		
		UseDoubleBuffering(true);

		tastiera.disegnaTastiera();
		gioco.disegnaNote();
		gioco.disegnaRiquadro();
		gioco.aggiornaDiscesa(); 

		char const key = LastBufferedKey();

			/*
		60 do
		61 di d
		62 re
		63 re d
		64 mi
		65 fa
		66 fa d
		67 sol
		68 sol d
		69 la
		70 la d
		71 si
		72 do
		*/

		/*400=RE
		  525=FA
		  650=SOL
		  775=SOL#
		*/

		if (key == 'q') {
			tastiera.cambiaColore(0);
			int pos = gioco.trovaCerchio(400, 720);
			if (pos != -1) {
				PlayMusic(62, SEMIMINIMA);
				gioco.elimina(pos);
				giuste++;
				Clear();
			}
			

		}
		if (key == 'w') {
			tastiera.cambiaColore(1);
			int pos = gioco.trovaCerchio(525, 720);
			if (pos != -1) {
				PlayMusic(65, SEMIMINIMA);
				gioco.elimina(pos);
				giuste++;
				Clear();
			}
		
		}

		if (key == 'o') {
			tastiera.cambiaColore(2);
			int pos = gioco.trovaCerchio(650, 720);
			if (pos != -1) {
				PlayMusic(67, SEMIMINIMA);
				gioco.elimina(pos);
				giuste++;
				Clear();
			}
			
		}

		if (key == 'p') {
			tastiera.cambiaColore(3);
			int pos = gioco.trovaCerchio(775, 720);
			if (pos != -1) {
				PlayMusic(68, SEMIMINIMA);
				gioco.elimina(pos);
				giuste++;
				Clear();
			}
			
		}
		

		Wait(8);
		Present();
		Clear();

		if (gioco.cont >= 12)
			ciclo = false;

	}

	int sbagliate = abs(giuste - MAX_CERCHI);

	if (giuste >= 12) {
		Clear();
		DrawString(580, 200, "HAI VINTO", "Arial", 80, White, true);
		Present();
	}
	else {
		Clear();
		DrawString(560, 200, "HAI PERSO", "Arial", 80, White, true);
		DrawString(560, 200, "prova ancora", "Arial", 50, White, true);
		Present();
	}
}



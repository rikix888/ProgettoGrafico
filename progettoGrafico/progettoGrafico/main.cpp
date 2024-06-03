#define IMM2D_WIDTH 1800//800
#define IMM2D_HEIGHT 900//500
#define IMM2D_SCALE 1
#define SEMIMINIMA 300


#define IMM2D_IMPLEMENTATION
#include "CGioco.h"
#include <string>

CTastiera tastiera;
CGioco gioco;

void run() {


	while (true)
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
			int pos = gioco.trovaCerchio(400, 780);
			if (pos != -1) {
				PlayMusic(62, SEMIMINIMA);
				gioco.elimina(pos);
				Clear();
			}
		}
		if (key == 'w') {
			tastiera.cambiaColore(1);
			int pos = gioco.trovaCerchio(525, 780);
			if (pos != -1) {
				PlayMusic(65, SEMIMINIMA);
				gioco.elimina(pos);
				Clear();
			}
		}

		if (key == 'o') {
			tastiera.cambiaColore(2);
			int pos = gioco.trovaCerchio(650, 780);
			if (pos != -1) {
				PlayMusic(67, SEMIMINIMA);
				gioco.elimina(pos);
				Clear();
			}
		}

		if (key == 'p') {
			tastiera.cambiaColore(3);
			int pos = gioco.trovaCerchio(775, 780);
			if (pos != -1) {
				PlayMusic(68, SEMIMINIMA);
				gioco.elimina(pos);
				Clear();
			}
		}
		

		Wait(8);
		Present();
		Clear();


	}
}



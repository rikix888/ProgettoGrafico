#define IMM2D_WIDTH 1800//800
#define IMM2D_HEIGHT 900//500
#define IMM2D_SCALE 1

#define IMM2D_IMPLEMENTATION
#include "immediate2d.h"
#include "CGioco.h"
#include "CTastiera.h"
#include "CRiquadro.h"
#include <string>

CTastiera tastiera;

CRiquadro riquadro;
CGioco gioco;

void run() {


	while (true)
	{
		
		UseDoubleBuffering(true);

		riquadro.disegnaRiquadro();
		tastiera.disegnaTastiera();
		gioco.disegnaNote();
		gioco.aggiornaDiscesa(); 

		char const key = LastBufferedKey();

		if (key == 'q') {
			tastiera.cambiaColore(0);
			int pos = gioco.trovaCerchio(400, 780);
			if (pos != -1) {
				gioco.elimina(pos);
				Clear();
			}
		}
		if (key == 'w') {
			tastiera.cambiaColore(1);
			int pos = gioco.trovaCerchio(525, 780);
			if (pos != -1) {
				gioco.elimina(pos);
				Clear();
			}
		}

		if (key == 'o') {
			tastiera.cambiaColore(2);
			int pos = gioco.trovaCerchio(650, 780);
			if (pos != -1) {
				gioco.elimina(pos);
				Clear();
			}
		}

		if (key == 'p') {
			tastiera.cambiaColore(3);
			int pos = gioco.trovaCerchio(775, 780);
			if (pos != -1) {
				gioco.elimina(pos);
				Clear();
			}
		}
		

		Wait(8);
		Present();
		Clear();


	}
}



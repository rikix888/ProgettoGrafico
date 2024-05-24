#define IMM2D_WIDTH 1800//800
#define IMM2D_HEIGHT 900//500
#define IMM2D_SCALE 1

#define IMM2D_IMPLEMENTATION
#include "immediate2d.h"
#include "CVettCerchi.h"
#include "CTastiera.h"
#include "CRiquadro.h"
#include <string>

CTastiera tastiera;
CVettCerchi vett1 = { Ccerchio(Punto(400, 100), 50, Red) , Ccerchio(Punto(775, 100), 50, Red)};
CVettCerchi vett2 = { Ccerchio(Punto(650, 100), 50, Red),Ccerchio(Punto(775, 100), 50, Red) };
CVettCerchi vett3 = { Ccerchio(Punto(525, 100), 50, Red) };


CRiquadro riquadro;

void run() {
	
	int cont = 0;
	while (true)
	{
		riquadro.disegna();
		tastiera.disegnaTastiera();
		vett1.disegna(); 

		vett1.aggY();
		
		cont++;
		if (cont > 140) {
			vett2.disegna();
			vett2.aggY();
			
		}
		if (cont > 270) {
			vett3.disegna();
			vett3.aggY();
		
		}
		
		char const key = LastBufferedKey();

		if (key == 'q') { 

			tastiera.cambiaColore(0);
			if (tastiera.controllaCerchio(0)) {
				DrawString(100, 100, "Giusto", "Arial", 50, White);
				Present();
				Wait(100);
			}
		}
		if (key == 'w') {
			tastiera.cambiaColore(1);
		}
		if (key == 'o') {
			tastiera.cambiaColore(2);
		}
		if (key == 'p') {
			tastiera.cambiaColore(3);
		}
	  
		Wait(8);
		Clear();

		
	}



}
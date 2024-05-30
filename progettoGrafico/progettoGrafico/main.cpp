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

CRiquadro riquadro;

void run() {
	
	
	int cont = 0;
	while (true)
	{
		UseDoubleBuffering(true);
	
		riquadro.disegna();
		tastiera.disegnaTastiera();
		vett1.disegna(); 

		vett1.aggYVett();
		
		cont++;
		if (cont > 140) {
			vett2.disegna();
			vett2.aggYVett();
			
		}
		if (cont > 270) {
			vett3.disegna();
			vett3.aggYVett();
		
		}
		
		char const key = LastBufferedKey();

		if (key == 'q') { 

			tastiera.cambiaColore(0);
			if (vett1.controllaCerchio(tastiera, 0)) {
				
				vett1.eliminaCerchio(0);
				Clear();
			}
		}
		if (key == 'w') {
			tastiera.cambiaColore(1);
			if (vett1.controllaCerchio(tastiera, 1)) {
				vett1.eliminaCerchio(1);
				Clear();
			
			}
		}
		if (key == 'o') {
			tastiera.cambiaColore(2);
			if (vett1.controllaCerchio(tastiera, 2)) {
				vett1.eliminaCerchio(2);
				Clear();
				
			}
		}
		if (key == 'p') {
			tastiera.cambiaColore(3);
			if (vett1.controllaCerchio(tastiera, 3)) {
				vett1.eliminaCerchio(3);
				Clear();
				
			}
		}
	  
		Wait(8);	
		Present();
		Clear();

		
	}



}
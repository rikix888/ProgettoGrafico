#define IMM2D_WIDTH 1800//800
#define IMM2D_HEIGHT 900//500
#define IMM2D_SCALE 1

#define IMM2D_IMPLEMENTATION
#include "immediate2d.h"
#include "Rettangolo.h"
#include "CVettCerchi.h"
#include "giocoDino.h"

CVettCerchi tastiera = { Ccerchio(Punto(400, 780), 50, Blue) , Ccerchio(Punto(500, 780), 50, Blue), Ccerchio(Punto(600, 780), 50, Blue), Ccerchio(Punto(700, 780), 50, Blue) };
CVettCerchi vett1 = { Ccerchio(Punto(400, 100), 50, Red) , Ccerchio(Punto(500, 100), 50, Red), Ccerchio(Punto(600, 100), 50, Red), Ccerchio(Punto(700, 100), 50, Red)};
CVettCerchi vett2 = { Ccerchio(Punto(400, 100), 50, Red),Ccerchio(Punto(600, 100), 50, Red) };
CVettCerchi vett3 = { Ccerchio(Punto(700, 100), 50, Red) };

void run() {
	
	srand(time(NULL));
	


giocoDino gioco;
	gioco.avvio();

	/** 
	int cont = 0;
	while (true)
	{
		
		tastiera.disegnaTast();
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
		const char key = LastKey();
		if (key == 'q') {

			
		}
		if (key == 'w') {
		
		}
		if (key == 'o') {
		
		}
		if (key == 'p') {
			
		}
	  
		Wait(18);
		Clear();

		
	}
	*/













	/*int x = 0;
	bool click = false;
	bool statoMouseFramePrec = false;
	Color colore = Blue;
	Color bordo = White;
	while (true) {
		if (!click)
		{
			DrawRectangle(x, 15, 40, 40, colore, bordo);
			x++;
		}
		else {
			DrawRectangle(x, 15, 40, 40, colore, bordo);
			x+=2;
		}
		
		Wait(33);
		Clear();





		bool statoMouseFrameAttu = LeftMousePressed();
		if (statoMouseFrameAttu==true&& statoMouseFramePrec==false) {

			int xMouse = MouseX();
			int yMouse = MouseY();

			if (x < xMouse && xMouse < x + 40) {

				if (10 < yMouse && yMouse < 10 + 40) {

					click = !click;
					colore = MakeColor(rand() % 256, rand() % 256, rand() % 256);
					bordo = MakeColor(rand() % 256, rand() % 256, rand() % 256);
				}
			}
		}
		statoMouseFramePrec = statoMouseFrameAttu;
	}*/
}
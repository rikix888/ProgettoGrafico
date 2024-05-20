#define IMM2D_WIDTH 800
#define IMM2D_HEIGHT 500
#define IMM2D_SCALE 1

#define IMM2D_IMPLEMENTATION
#include "immediate2d.h"
#include "Rettangolo.h"
#include "CVettCerchi.h"


Ccerchio c = Ccerchio(Punto(100, 100), 50, Red);
Ccerchio a = Ccerchio(Punto(200, 100), 50, Red);
Ccerchio b = Ccerchio(Punto(300, 100), 50, Red);
Ccerchio d = Ccerchio(Punto(400, 100), 50, Red);
CVettCerchi vett;

void run() {
	while (true)
	{
		for (int i = 0; i < 4; i++)
		{
			vett[i].disegna(); 
			Wait(5);
			vett[i].aggY();
		
		}
		Wait(5);
		Clear();
	  
	}
	













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
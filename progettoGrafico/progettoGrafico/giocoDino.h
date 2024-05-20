#pragma once
#define ALTEZZA 800
#define LARGHEZZA 600
#define ALTEZZA_DINO 50
#define LARGHEZZA_DINO 50
#define LIVELLO (LARGHEZZA - 100)
#define ALTEZZA_SALTO 150
#define OSTACOLO_ALTEZZA 25
#define OSTACOLO_LARGHEZZA 25
#define VELOCITA_OSTACOLO 15
#define DINO_X 100
#define MAX_OSTACOLI 10
#define INTERVALLO_OSTACOLI rand()%500+50
#define semibreve 800
#define semiminima  400
#define croma  200
#define semicroma  100
#include "immediate2d.h"

class giocoDino
{
 private:
    int dinoY;
    bool isSalto;
    bool isCaduta;
    int velocitaSalto;
    int ostacoloX[MAX_OSTACOLI];
    int ostacoloY[MAX_OSTACOLI];
    bool ostacoloPresente[MAX_OSTACOLI];
    int timerOstacolo;

 
public:   
   
    giocoDino(); 
    void musica();
    void musicaFine();
    void inizaOstacolo();
    void creaOstacolo();
    void aggiornaDino();
    void aggiornaOstacolo();
    bool controlloTocco();
    void disegnaTutto();
    void avvio();


    };





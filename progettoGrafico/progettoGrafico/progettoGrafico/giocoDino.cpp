#include "giocoDino.h"
#include <iostream>
#include <string>
using namespace std;

giocoDino::giocoDino(){
    dinoY = LIVELLO;
    isSalto = false;
    isCaduta = false;
    velocitaSalto = 20;
    timerOstacolo = 0;
    inizaOstacolo();
}

void giocoDino::musica()
{
    PlayMusic(76, croma);  // G6
    PlayMusic(76, croma);  // G6
    PlayMusic(0, croma);

    PlayMusic(76, croma);  //  G6
    PlayMusic(0, croma);

    PlayMusic(72, croma);  // E2
    PlayMusic(76, semiminima);
    PlayMusic(79, semiminima);
    PlayMusic(0, semiminima);

    PlayMusic(67, semiminima);
    PlayMusic(0, semiminima);

    for (int i = 0; i < 2; i++)
    {
        PlayMusic(72, semiminima);
        PlayMusic(0, croma);

        PlayMusic(67, semiminima);
        PlayMusic(0, croma);

        PlayMusic(64, semiminima);
        PlayMusic(0, croma);

        PlayMusic(69, semiminima);
        PlayMusic(71, semiminima);
        PlayMusic(70, croma);
        PlayMusic(69, semiminima);

        PlayMusic(67, croma);
        PlayMusic(76, croma);
        PlayMusic(79, croma);
        PlayMusic(81, semiminima);

        PlayMusic(77, croma);
        PlayMusic(79, croma);
        PlayMusic(0, croma);

        PlayMusic(76, semiminima);
        PlayMusic(72, semicroma);
        PlayMusic(74, semicroma);
        PlayMusic(71, semiminima);
        PlayMusic(0, croma);
    }

    for (int i = 0; i < 2; i++)
    {
        PlayMusic(79, croma);
        PlayMusic(78, croma);
        PlayMusic(77, croma);
        PlayMusic(75, semiminima);
        PlayMusic(76, croma);
        PlayMusic(0, croma);

        PlayMusic(68, croma);
        PlayMusic(69, croma);
        PlayMusic(72, croma);
        PlayMusic(0, croma);

        PlayMusic(69, croma);
        PlayMusic(72, croma);
        PlayMusic(74, croma);
        PlayMusic(0, semiminima);

        PlayMusic(79, croma);
        PlayMusic(78, croma);
        PlayMusic(77, croma);
        PlayMusic(75, semiminima);
        PlayMusic(76, croma);
        PlayMusic(0, croma);


        PlayMusic(84, croma);
        PlayMusic(84, croma);
        PlayMusic(84, croma);
        PlayMusic(0, semiminima);
        PlayMusic(0, semiminima);

        PlayMusic(79, croma);
        PlayMusic(78, croma);
        PlayMusic(77, croma);
        PlayMusic(75, semiminima);
        PlayMusic(76, croma);
        PlayMusic(0, croma);

        PlayMusic(68, croma);
        PlayMusic(69, croma);
        PlayMusic(72, croma);
        PlayMusic(0, croma);

        PlayMusic(69, croma);
        PlayMusic(72, croma);
        PlayMusic(74, croma);
        PlayMusic(0, semiminima);

        PlayMusic(75, semiminima);
        PlayMusic(0, croma);
        PlayMusic(74, semiminima);
        PlayMusic(0, croma);
        PlayMusic(72, semiminima);
        PlayMusic(0, semiminima);
        PlayMusic(0, semibreve);


    }




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
}

void giocoDino::musicaFine()
{
    PlayMusic(64, semiminima);
    PlayMusic(0, croma);
    PlayMusic(60, semiminima);
    PlayMusic(0, semiminima);
    PlayMusic(55, semiminima);

    PlayMusic(69, croma);
    PlayMusic(71, croma);
    PlayMusic(69, croma);

    PlayMusic(68, croma);
    PlayMusic(70, croma);
    PlayMusic(69, croma);

    PlayMusic(64, croma);
    PlayMusic(62, croma);
    PlayMusic(64, croma);




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
}

void giocoDino::inizaOstacolo() {
    for (int i = 0; i < MAX_OSTACOLI; ++i) {
        ostacoloX[i] = 0;
        ostacoloY[i] = 0;
        ostacoloPresente[i] = false;
    }
}

void giocoDino::creaOstacolo() {
    for (int i = 0; i < MAX_OSTACOLI; ++i) {
        if (!ostacoloPresente[i]) {
            ostacoloX[i] = ALTEZZA;
            ostacoloY[i] = LIVELLO - OSTACOLO_LARGHEZZA;
            ostacoloPresente[i] = true;
            break;
        }
    }
}

void giocoDino::aggiornaDino() {
    if (isSalto) {
        dinoY -= velocitaSalto;
        if (dinoY <= LIVELLO - ALTEZZA_SALTO) {
            isSalto = false;
            isCaduta = true;
        }
    }
    else if (isCaduta) {
        dinoY += velocitaSalto;
        if (dinoY >= LIVELLO) {
            dinoY = LIVELLO;
            isCaduta = false;
        }
    }
}

void giocoDino::aggiornaOstacolo() {
    for (int i = 0; i < MAX_OSTACOLI; ++i) {
        if (ostacoloPresente[i]) {
            ostacoloX[i] -= VELOCITA_OSTACOLO;
            if (ostacoloX[i] < -OSTACOLO_ALTEZZA) {
                ostacoloPresente[i] = false;
            }
        }
    }
}

bool giocoDino::controlloTocco() {
    for (int i = 0; i < MAX_OSTACOLI; ++i) {
        if (ostacoloPresente[i]) {
            if (DINO_X + ALTEZZA_DINO > ostacoloX[i] && DINO_X < ostacoloX[i] + OSTACOLO_ALTEZZA &&
                dinoY + LARGHEZZA_DINO > ostacoloY[i] && dinoY < ostacoloY[i] + OSTACOLO_LARGHEZZA) {
                return true;
            }
        }
    }
    return false;
}

void giocoDino::disegnaTutto() {
    Clear(White);
    DrawRectangle(DINO_X, dinoY, ALTEZZA_DINO, LARGHEZZA_DINO, Black, Black);
    for (int i = 0; i < MAX_OSTACOLI; ++i) {
        if (ostacoloPresente[i]) {
            DrawRectangle(ostacoloX[i], ostacoloY[i], OSTACOLO_ALTEZZA, OSTACOLO_LARGHEZZA, Red, Red);
        }
    }
    Present();
}

void giocoDino::avvio() {
    UseDoubleBuffering(true);

    while (true) {

        musica();

        ClearInputBuffer();
        char key = LastKey();

        if (key == Keys::Esc) {
            CloseWindow();
        }
        else if (key == ' ' && dinoY == LIVELLO) {
            isSalto = true;
        }

        aggiornaDino();
        aggiornaOstacolo();

        if (++timerOstacolo >= INTERVALLO_OSTACOLI) {
            creaOstacolo();
            timerOstacolo = 0;
        } 
        if (controlloTocco())
        {

            DrawString(200, 200, "THE END", "Arial", 100, Black,true);
            ResetMusic(); 

            Wait(600);
            
            PlayMusic(76, semiminima);
            PlayMusic(0, croma);
            PlayMusic(72, semiminima);
            PlayMusic(0, semiminima);
            PlayMusic(67, semiminima);

            PlayMusic(69, semiminima);
            PlayMusic(71, semiminima);
            PlayMusic(69, semiminima);

            PlayMusic(68, semiminima);
            PlayMusic(70, croma);
            PlayMusic(69, croma);

            PlayMusic(64, croma);
            PlayMusic(62, croma);
            PlayMusic(64, semiminima);
            PlayMusic(0, semiminima);

            Wait(5000);

            CloseWindow();
        }
        disegnaTutto();

        Wait(30); // Frame rate

    }

}


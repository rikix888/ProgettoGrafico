#pragma once
#include "Punto.h"
#include "immediate2d.h"
class Rettangolo
{
public:
	Punto posizione;
	int widt, height;
	Color colore;
	Rettangolo() {
		widt = 100;
		height = 100;
		colore = Red;
	}
	Rettangolo(Punto posizione, int widt, int height, Color colore) {

		this->widt = widt;
		this->height = height;
		this->colore = colore;
	}
	void diseganti() {
		DrawRectangle(posizione.x, posizione.y, widt, height, colore);
	}
	void setWH(int widt, int height) {
		this->widt = widt;
		this->height = height;
	}
	void setPunto(Punto p) {
		this->posizione = p;
	}
	Punto getPuntp() {
		return posizione;
	}
};


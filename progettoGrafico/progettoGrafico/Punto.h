#pragma once
class Punto
{
public:
	int x, y;

	Punto() {
		x = 0;
		y = 0;
	}
	Punto(int x, int y) {
		this->x = x;
		this->y = y;

	}
	int getX(){
		return x;
	}
	int getY() {
		return y;
	}
};


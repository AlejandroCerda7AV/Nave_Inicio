#ifndef __NAVE_H__
#define __NAVE_H__
#include "Sprite.h"

class Objeto{

int x;
int y;
int w;
int h;
int posicionActual;
int posicionfinal;
int posicionBrinco;
int stepsActual;
int stepsFinal;
int moduleUsing;
Sprite*sprite;
bool isVisible;

public:
	void SetVisible(bool isVisible);
	Objeto(SDL_Surface * screen, char * rutaImagen, int x, int y, int modulo);
	~Objeto();
	void Pintar();
	void Pintar(int modulo,int x, int y);
	void Mover(int posicion);
	void Mover(int brinco);
	int obtenerX();
	int obtenerY();
	int obtenerW();
	int obtenerH();

};

#endif
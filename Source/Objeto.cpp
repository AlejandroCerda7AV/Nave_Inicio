#include "Objeto.h"
#include "Config.h"
#include "Sprite.h"

Objeto::Objeto(SDL_Surface * screen, char * rutaImagen){
	sprite = new Sprite(screen);
	sprite->CargarImagen(rutaImagen);
	w=sprite->WidthModule(moduleUsing);
	h=sprite->HeightModule(moduleUsing);
	this->x=x;
	this->y=y;
	stepsActual=0;
	posicionBrinco=0;
	posicionActual=0;
	isVisible=true;
}

Objeto::~Objeto(){
	delete sprite;
}

void Objeto::Pintar(){
	if(isVisible)
		sprite->PintarModulo(moduleUsing,x,y);
}
void Objeto::MoverDerecha(int posicion){
	x += posicion;
}
int Objeto::obtenerX(){
	return x;
}
int Objeto::obtenerY(){
	return y;
}
int Objeto::obtenerW(){
	return w;
}
int Objeto::obtenerH(){
	return h;
}
bool Objeto::IsRunningAnimacion(){
	if(posicionBrinco==0)
		return false;
	else
		return true;
}

void Objeto::TerminarAnimacion(){
}

void Objeto::SetVisible(bool isVisible){
	this->isVisible;
}
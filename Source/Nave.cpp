#include "Nave.h"

void Nave::Pintar(){
	nave->Pintar();
}

Nave::Nave(SDL_Surface * screen, char * rutaImagen, int x, int y, int modulo){
	nave=new Objeto(screen,rutaImagen,x,y,modulo);
	bala=new Objeto(screen, "../Data/balas.bmp",0,0,MODULO_BALAS_BALA1);
	bala->
}

void Nave::MoverIzquierda(){
}

void Nave::MoverDerecha(){
	nave->Mover(10);
}

void Nave::MoverArriba(){
}

void Nave::MoverAbajo(){
}

Objeto*Nave::GetNaveObjeto(){
	return nave;
}
void Nave::Disparar(){
	bala->SetVisible(true);
	bala->ponerEn(nave->obtenerX()+nave->obtenerW()/2,nave->obtenerY());
}

void Nave::Actualizar(){
	bala->Pintar();
	bala->MoverArriba(1);
}
#ifndef __NAVE_H__
#define __NAVE_H__
#include "Objeto.h"

class Nave{
	Objeto *nave;
	Objeto *bala;
public:
	Nave(SDL_Surface * screen, char * rutaImagen, int x, int y, int modulo);
	void Pintar();
	void Disparar();
	void Actualizar();
	void MoverIzquierda();
	void MoverDerecha();
	void MoverArriba();
	void MoverAbajo();
	Objeto *GetNaveObjeto()
};

#endif
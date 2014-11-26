#include <SDL.h>
#include <SDL_image.h>
#include "Objeto.h"
#include "Nave.h"

class CGame
{
public:
	bool Start();
	static CGame instanceGame;

	CGame();
	void Finalize();
	
	enum Estado{
		ESTADO_INICIANDO,
		ESTADO_MENU,
		ESTADO_JUGANDO,
		ESTADO_TERMINADO,
		ESTADO_FINALIZADO
	};

private:
	void Iniciando();
	bool esLimitePantalla(Objeto *objeto, int bandera);
	Uint8 *keys;
	SDL_Event event;


	SDL_Surface *screen;
	Nave*nave;
	Objeto **enemigoArreglo

	Estado estado;

	Objeto*titulo;
	Objeto*menu;
	Objeto*fondo;

};
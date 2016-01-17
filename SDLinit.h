#ifndef SDL_INIT_H
#define SDL_INIT_H
#include "SDL.h"
#include "SDL_image.h"


#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

class SDLinit{

public: 
	SDLinit(int driverID = -1, int rendererFlag = SDL_RENDERER_ACCELERATED);
	SDL_Window *getWindow(SDL_Window window);
	SDL_Window *window = nullptr;
	SDL_Surface *windowSurface = nullptr;

	SDL_Renderer* renderer;

};

#endif // !SLD_INIT_H


//test
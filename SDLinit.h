#ifndef SDL_INIT_H
#define SDL_INIT_H
#include "SDL.h"
#include "SDL_image.h"


class SDLinit{

public: 
	SDLinit();
	SDL_Window *getWindow(SDL_Window window);
	SDL_Window *window = nullptr;
	SDL_Surface *windowSurface = nullptr;
};

#endif // !SLD_INIT_H

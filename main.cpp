#include <iostream>

//SDL headers
#include "SDL.h"
#include "SDL_image.h"

//custom headers
#include "SDLinit.h"
#include "SSTrooper.h"
#include "Game.h"
#include "GameObject.h"

using namespace std;


int main(int argc, char* args[])
{
	SDLinit sdl;
	Game StarshipTroopers2D(&sdl);

	SDL_DestroyRenderer(sdl.renderer);
	SDL_DestroyWindow(sdl.window);


	IMG_Quit();
	SDL_Quit();


	return 0;
}




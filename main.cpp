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
	SDLinit SDL_Init;
	Game StarshipTroopers2D(&SDL_Init);

	SDL_DestroyRenderer(SDL_Init.renderer);
	SDL_DestroyWindow(SDL_Init.window);


	IMG_Quit();
	SDL_Quit();


	return 0;
}




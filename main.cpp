#include <iostream>

//SDL headers
#include "SDL.h"
#include "SDL_image.h"

//custom headers
#include "SDLinit.h"
#include "SSTrooper.h"
#include "Game.h"

using namespace std;


int main(int argc, char* args[])
{

	SDLinit newSDL_Init;
	Game StarshipTroopers2D;

	SDL_DestroyWindow(newSDL_Init.window);
	SDL_Quit();


	return 0;
}




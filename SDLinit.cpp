#include "SDL.h"
#include "SDL_image.h"
#include <iostream>

#include "SDLinit.h"

using namespace std;

SDLinit::SDLinit(int driverID, int rendererFlag){

	SDL_Init(SDL_INIT_EVERYTHING);
	int status = SDL_Init(SDL_INIT_EVERYTHING);
	IMG_Init(IMG_INIT_PNG);

	if (status == 0)
	{
		//Creates SDL window and returns the window that was created or NULL on failure. 
		window = SDL_CreateWindow("Starship Troopers 2D", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

		if (window)
		{
			renderer = SDL_CreateRenderer(window, driverID, rendererFlag);

			//windowSurface = SDL_GetWindowSurface(window);

		}
		else{
			cout << "ERROR: Could not load Window" << SDL_GetError() << endl;
		}

		SDL_Surface *windowSurface = nullptr;
		windowSurface = SDL_GetWindowSurface(window);


	}
	else{
		cout << "ERROR: Could initialize SDL" << SDL_GetError() << endl;
	}
	

	

}






#include "SSTrooper.h"
#include "SDL.h"
#include "SDL_image.h"

SSTrooper::SSTrooper() 
{
	// Initializes Position
	x = 0;
	y = 0; 

	//Initializes Velocity
	xVel = 0;
	yVel = 0;

}

//SDL_Surface *SSTrooper_surface = IMG_Load("SSTrooperImage.png"); // Loads SSTrooperImage.png 

SDL_Event event;

void SSTrooper::handle_input()
{


	if (event.type == SDL_KEYDOWN)
	{
		//Adjust the velocity
		switch (event.key.keysym.sym)
		{
			case SDLK_UP: y = y - 10; break;
			case SDLK_DOWN: y = y + 10; break;
			case SDLK_LEFT: x = x - 10; break;
			case SDLK_RIGHT: x = x + 10; break;
		}

	}

	
}


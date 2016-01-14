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


SDL_Event event;
void SSTrooper::handle_input()
{
	//If a key was pressed
	if (event.type == SDL_KEYDOWN)
	{
		//Adjust the velocity
		switch (event.key.keysym.sym)
		{
		case SDLK_UP: yVel -= 2; break;
		case SDLK_DOWN: yVel +=  2; break;
		case SDLK_LEFT: xVel -=  2; break;
		case SDLK_RIGHT: xVel +=  2; break;
		}

	}

}
#include "SDL.h"
#include "SDL_image.h"

#include "Game.h"


Game::Game(){

	bool GameisRunning = true;
	SDL_Event event;

	while (GameisRunning == true)
	{
		while (SDL_PollEvent(&event) != 0) // Checks if the eventqueue is empty SDL_PollEvent returns 1 if there is a pending Event and 0 if there are no events pending
		{
			if (event.type == SDL_QUIT)
				GameisRunning = false;
		}
	}


}
#include "SDL.h"
#include "SDL_image.h"
#include "SDLinit.h"
#include "GameObject.h"
#include "Game.h"


Game::Game(SDLinit *sdl){

	bool GameisRunning = true;
	SDL_Event event;
	
	GameObject trooper(10, 10);
	trooper.setObjImage(sdl->renderer, "StarshipTrooper_2.png");
	

	while (GameisRunning == true)
	{
		while (SDL_PollEvent(&event) != 0) // Checks if the eventqueue is empty SDL_PollEvent returns 1 if there is a pending Event and 0 if there are no events pending
		{

			
			trooper.drawObjImage(sdl->renderer, trooper.getObjImage(), NULL, &trooper.setobjBoundingBox(0, 0, 128, 256));

			SDL_RenderPresent(sdl->renderer);

			if (event.type == SDL_QUIT)
				GameisRunning = false;


		}
	}


}
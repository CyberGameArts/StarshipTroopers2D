#include <iostream>

//SDL headers
#include "SDL.h"
#include "SDL_image.h"

//custom headers
#include "SSTrooper.h"


using namespace std;


int main(int argc, char* args[])
{


	//Initializes SDL
	SDL_Init(SDL_INIT_EVERYTHING);
	IMG_Init(IMG_INIT_PNG);

	//Creates SDL window and returns the window that was created or NULL on failure. 
	SDL_Window *window = nullptr;
	window = SDL_CreateWindow("Starship Troopers 2D", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_SHOWN);
		
	SDL_Surface *windowSurface = nullptr;
	windowSurface = SDL_GetWindowSurface(window);

	SDL_Rect SST_Rect;
	SST_Rect.x = 100;
	SST_Rect.y = 120;


	// Initializations 
	//---------------------------------------------------------------------------------------------------------------
	// Game Logic 





	SDL_Surface *SSTrooper_surface = IMG_Load("SSTrooperImage.png"); // Loads SSTrooperImage.png 
	SDL_Surface *Bug_surface = nullptr;

	

	bool GameisRunning = true; //simple boolean which denotes the on or off state of the Game
	SDL_Event event; // creates SDL event from general event structure:  typedef union{ Uint8 type; SDL_ActiveEvent active; SDL_KeyboardEvent key; SDL_MouseMotionEvent motion; SDL_MouseButtonEvent button; SDL_JoyAxisEvent jaxis;SDL_JoyBallEvent jball;SDL_JoyHatEvent jhat; SDL_JoyButtonEvent jbutton; SDL_ResizeEvent resize;SDL_ExposeEvent expose;SDL_QuitEvent quit;SDL_UserEvent user;SDL_SysWMEvent syswm;} SDL_Event;


	/**************main game loop*******************/
	while (GameisRunning == true)
	{
		while (SDL_PollEvent(&event) != 0) // Checks if the eventqueue is empty SDL_PollEvent returns 1 if there is a pending Event and 0 if there are no events pending
		{




			if (event.type == SDL_QUIT)
				GameisRunning = false;

		}

		SDL_BlitSurface(SSTrooper_surface, NULL, windowSurface, NULL);
		SDL_UpdateWindowSurface(window); //Update Windows Surface
	}

	
	SDL_DestroyWindow(window);
	SDL_Quit();
	//moin

	return 0;
}




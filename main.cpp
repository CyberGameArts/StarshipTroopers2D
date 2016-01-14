#include "SDL.h"
#include <iostream>




//test 

using namespace std;
int main(int argc, char* args[])
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window *window = nullptr;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
		cout << "video Init Error" << SDL_GetError() << endl;
	else
	{
		window = SDL_CreateWindow("SDL Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
		if (window == NULL)
			cout << "Window creation error" << SDL_GetError() << endl; 
		else
		{
			SDL_UpdateWindowSurface(window);
			SDL_Delay(3000);

		}
	}


	SDL_DestroyWindow(window);
	SDL_Quit();


	return 0;
}




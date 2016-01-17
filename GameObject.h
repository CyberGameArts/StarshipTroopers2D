#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "SDL.h"
#include "SDL_image.h"
#include "SDLinit.h"
#include <iostream>

using namespace std;


struct vector{
	int vec2Dx;
	int vec2Dy;

};

class GameObject{

public:


	// contructor
	GameObject(float posx, float posy);
	//~GameObject();

	int getPosX(void);
	int getPosY(void);
	
	vector setPos(float x, float y);

	void setObjImage(SDL_Renderer *renderer,const char *imagePath);
	void drawObjImage(SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect *srcRect, SDL_Rect *destRect);

	void killObj(GameObject obj);

	SDL_Texture *getObjImage();
	SDL_Rect setobjBoundingBox(int x = 0, int y = 0, int h = 256, int w = 256);


private:

	SDL_Rect objBoundingBox;
	SDL_Surface *objImage;
	SDL_Texture* objTexture;
	vector pos;
};

#endif 




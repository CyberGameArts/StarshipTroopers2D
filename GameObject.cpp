#include "GameObject.h"

GameObject::GameObject(float posx, float posy){

	vector objVector;
	objVector.vec2Dx = posx;
	objVector.vec2Dy = posy;


}


void GameObject::setObjImage(SDL_Renderer *renderer,const char *imagePath){

	SDL_Surface *image = IMG_Load(imagePath);

	 objTexture = SDL_CreateTextureFromSurface(renderer,image);
	
	 SDL_FreeSurface(image);

}


void GameObject::drawObjImage(SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect *srcRect, SDL_Rect *destRect){

	SDL_RenderCopy(renderer, texture, srcRect, destRect);

}

SDL_Rect GameObject::setobjBoundingBox(int x, int y, int h, int w)
{
	objBoundingBox.x = x;
	objBoundingBox.y = y;
	objBoundingBox.h = h;
	objBoundingBox.w = w;

	return objBoundingBox;
}

void GameObject::killObj(GameObject obj)
{
	SDL_DestroyTexture(obj.getObjImage());

}


SDL_Texture* GameObject::getObjImage(){

	return objTexture;
}



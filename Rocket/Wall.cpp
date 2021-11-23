#include "Game.h"
#include "Asteroid.h"
#include "Wall.h"
#include "BGSpriteComponent.h"


Wall::Wall(class Actor* owner, int drawOrder)
	:SpriteComponent(owner, drawOrder)
{
	Actor* temp = new Actor(this);
	temp->SetPosition(Vector2(512.0f, 384.0f));

	BGSpriteCompoenet* bg = new BGSpriteCompoenet(temp);
	bg->SetScreenSize(Vector2(1024.0f, 768.0f));
	std::vector<SDL_Texture*> bgtexs = {
		GetTexture("Assets/Farback01.png"),
		GetTexture("Assets/Farback02.png")
	};
	bg->SetBGTectures(bgtexs);
}
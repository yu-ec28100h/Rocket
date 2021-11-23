#pragma once
#include "Actor.h"
#include "SpriteComponent.h"

class Wall : public SpriteComponent
{
public:
	Wall(class Actor* owner, int drawOrder=20);
};
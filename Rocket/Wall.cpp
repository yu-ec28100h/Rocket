#include "Wall.h"
#include "SpriteComponent.h"
#include "MoveComponent.h"
#include "Game.h"
#include "CircleComponent.h"
#include "Asteroid.h"


Wall::Wall(class Game* game)
	:Actor(game)
{
}

void Wall::UpdateActor(float deltaTime)
{
	for (auto ast : GetGame()->GetAsteroids())
	{
		if (IntersectToWall(128.0f, *(ast->GetCircle())))
		{
			ast->SetState(Edead);
		}
	}
}
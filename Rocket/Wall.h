#pragma once
#include "Actor.h"

class Wall : public Actor
{
public:
	Wall(class Game* game);

	void UpdateActor(float deltaTime) override;
private:
	class CircleComponent* mCircle;
};
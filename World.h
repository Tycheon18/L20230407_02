#pragma once
#include "Wall.h"
#include "Floor.h"
#include "Player.h"
#include "Monster.h"
#include "Goal.h"

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	FWall WorldWall();
	FFloor WorldFloor();
	FPlayer Player();
	FMonster Monster();
	FGoal Goal();

};


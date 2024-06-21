#include "GameCreator.h"
#include <stdio.h>

GameCreator::GameCreator()
{
	name = "ゲームクリエイター科";
	
}

GameCreator::~GameCreator()
{
	
}

void GameCreator::Attendance()
{
	printf("%sいます\n", name);
}

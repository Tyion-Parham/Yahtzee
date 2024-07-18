//Tyion Parham
//Lab 1
//Due: 7/17/24

#include <ctime>
#include "Die.h"
#include "GameLogic.h"
#include "ConsoleUI.h"

int main()
{
	srand(time(0));
	GameLogic Game;
	Game.useGameLogic();
	return 0;
}
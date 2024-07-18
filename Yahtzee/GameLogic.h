#pragma once
#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "Die.h"
#include "ConsoleUI.h"

class GameLogic
{
private:
	Die dice[5];
	ConsoleUI ui;
	int dontReroll;
	int totalScore = 0;
	int rounds = 0;
	void rollDice();
	void chooseReroll();

public:
	//GameLogic();
	bool findReroll();
	int getScore();
	int getRounds();
	void useGameLogic();
};

#endif // !GAMELOGIC_H
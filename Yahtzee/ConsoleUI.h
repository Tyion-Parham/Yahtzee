#pragma once
#ifndef CONSOLEUI_H
#define CONSOLEUI_H

#include "Die.h"
//#include "GameLogic.h"

class ConsoleUI
{
public:
	ConsoleUI();
	void promptPlay();
	void promptReroll();
	void chooseNum();
	void outputScore();
	void printResults();
};

#endif // !CONSOLEUI_H
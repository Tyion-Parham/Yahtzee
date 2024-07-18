#include "ConsoleUI.h"

ConsoleUI::ConsoleUI()
{}

void ConsoleUI::promptPlay()
{
	cout << "\n\nWould you like to play Yahtzee again (y or Y for yes; anything else for no)? ";
}

void ConsoleUI::promptReroll()
{
	cout << "Would you like to reroll? ";
}


void ConsoleUI::chooseNum()
{
	cout << "Which combination would you like to use? ";
}
void ConsoleUI::outputScore()
{
	cout << "Your score is: ";
}

void ConsoleUI::printResults()
{
	cout << "Your final score is: ";
}
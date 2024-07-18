#include "GameLogic.h"
#include "ConsoleUI.h"

void GameLogic::rollDice()
{
	for (Die &d : dice)
	{
		d.roll();
		d.getFaceValue();
	}
}

bool GameLogic::findReroll()
{
	char check;
	bool reroll;
	ui.promptReroll();
	cin >> check;

	if (check == 'y' || check == 'Y')
		reroll = true;
	else
		reroll = false;

	return reroll;
}

void GameLogic::chooseReroll()
{
	dontReroll = 0;
	for (Die &d : dice)
	{
		cout << d.dieToString() << endl;
	}
	cout << endl;
	for (Die &d : dice)
	{
		cout << d.dieToString() << "   -   ";
		d.setReroll(findReroll());
	}
	cout << endl;
	for (Die& d : dice)
	{
		if (d.getReroll() == true)
		{
			d.roll();
			cout << d.dieToString() << endl;
		}
		else
		{
			dontReroll++;
		}
	}
	cout << endl;
}

//GameLogic()


int GameLogic::getScore()
{
	return totalScore;
}

int GameLogic::getRounds()
{
	return rounds;
}

void GameLogic::useGameLogic()
{
	int roundReroll = 0;
	int combinationNum;
	char run;
	do
	{
		do
		{
			rollDice();
			do
			{
				chooseReroll();
				if (dontReroll == 5)
				{
					roundReroll = 4;
				}
				roundReroll++;
			} while (roundReroll < 2);
			for (Die& d : dice)
			{
				cout << d.dieToString() << endl;
			}
			ui.chooseNum();
			cin >> combinationNum;
			for (Die& d : dice)
			{
				if (d.getFaceValue() == combinationNum)
					totalScore += d.getFaceValue();
			}
			rounds++;
			cout << endl;
			ui.outputScore();
			cout << getScore() << endl << endl;

		} while (rounds < 6);
		ui.printResults();
		cout << getScore();
		ui.promptPlay();
		cin >> run;
	
	} while (run == 'y' || run == 'Y');
}
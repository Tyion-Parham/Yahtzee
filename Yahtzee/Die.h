#pragma once
#ifndef DIE_H
#define DIE_H

#include <iostream>
using namespace std;

class Die
{
private:
	int faceValue;
	const int SIDES;
	bool reroll;
public:
	Die();
	Die(int sides);
	void roll();
	void setFaceValue(int fv);
	void setReroll(bool rr);
	int getFaceValue();
	bool getReroll();
	string dieToString();
};

#endif // !DIE_H

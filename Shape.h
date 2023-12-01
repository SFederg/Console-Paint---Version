#pragma once
#include "Position.h"
#include <iostream>

using namespace std;

class Shape
{
protected:
	Position position;
	char fillCharacter;

public:
	Shape();

	Shape(Position position, char fillCharacter);

	virtual void Draw(string* drawArea) = 0;
};
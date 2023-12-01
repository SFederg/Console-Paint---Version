#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	int radius;
public:
	Circle(int radius, char fillCharacter, Position position) : Shape(position, fillCharacter)
	{
		if (radius < 3)
		{
			throw "Incorrect radius";
		}

		this->radius = radius;
	}

	~Circle();

	void Draw(string* drawArea) override;
};
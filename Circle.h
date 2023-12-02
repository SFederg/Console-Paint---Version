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
			throw invalid_argument("radius can't be less than 3");
		}

		this->radius = radius;
	}

	~Circle();

	void Draw(string* drawArea) override;
};
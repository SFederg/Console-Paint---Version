#pragma once
#include "Shape.h"

class Line : public Shape
{
private:
	int countPoints;
	double angleFactor;
	int isArgumentConst;

public:
	Line(int countPoints, double angleFactor, char fillCharacter, Position position, int isArgumentConst) : Shape(position, fillCharacter)
	{
		if (countPoints <= 0 && (isArgumentConst > 1 || isArgumentConst < 0))
		{
			throw "Incorrect arguments";
		}

		this->countPoints = countPoints;
		this->angleFactor = angleFactor;
		this->isArgumentConst = isArgumentConst;
	}

	~Line();

	void Draw(string* drawArea) override;
};
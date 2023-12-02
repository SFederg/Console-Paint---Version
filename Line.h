#pragma once
#include "Shape.h"

class Line : public Shape
{
private:
	int countPoints;
	double angleFactor;
	bool isArgumentConst;

public:
	Line(int countPoints, double angleFactor, char fillCharacter, Position position, bool isArgumentConst) : Shape(position, fillCharacter)
	{
		if (countPoints <= 0)
		{
			throw invalid_argument("countPoints can't be less or equal zero");
		}

		this->countPoints = countPoints;
		this->angleFactor = angleFactor;
		this->isArgumentConst = isArgumentConst;
	}

	~Line();

	void Draw(string* drawArea) override;
};
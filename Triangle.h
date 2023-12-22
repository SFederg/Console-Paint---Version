#pragma once
#include "Shape.h"
#include "Line.h"

class Triangle : public Shape
{
private:
	int sidesLength;
	Line* firstSide;
	Line* secondSide;
	Line* thirdSide;

public:
	Triangle(int sidesLength, char fillCharacter, Position position) : Shape(position, fillCharacter)
	{
		if (sidesLength < 2)
		{
			throw invalid_argument("sidesLength can't be less than 2");
		}

		this->sidesLength = sidesLength;

		Position linePosition = position;
		firstSide = new Line(sidesLength, 1, fillCharacter, linePosition, false);

		linePosition = { position.GetX() + sidesLength - 1, sidesLength % 2 == 0 ? position.GetY() - 1 : position.GetY() - 2 };
		secondSide = new Line(sidesLength, -1, fillCharacter, linePosition, false);

		linePosition = { sidesLength % 2 == 0 ? position.GetX() + sidesLength / 2 - 1 : position.GetX() + sidesLength / 2, position.GetY() + sidesLength / 2 - 1 };
		thirdSide = new Line(sidesLength * 2 - 1, 0, fillCharacter, linePosition, false);
	}

	~Triangle();

	void Draw(string* drawArea) override;

	Triangle& operator =(Shape* shape);
};
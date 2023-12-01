#pragma once
#include "Shape.h"
#include "Line.h"

class Rectangle : public Shape
{
private:
	int vertiacalSidesLength;
	int horizontalSidesLength;
	Line* firstSide;
	Line* secondSide;
	Line* thirdSide;
	Line* fourthSide;

public:
	Rectangle(int vertiacalSidesLength, int horizontalSidesLength, char fillCharacter, Position position) : Shape(position, fillCharacter)
	{
		if (vertiacalSidesLength < 2 || horizontalSidesLength < 2)
		{
			throw "Incorrect sides length";
		}

		this->vertiacalSidesLength = vertiacalSidesLength;
		this->horizontalSidesLength = horizontalSidesLength;

		Position linePosition = position;
		firstSide = new Line(horizontalSidesLength, 0, fillCharacter, linePosition, 0);

		linePosition = { position.GetX() - (horizontalSidesLength / 2 - 1), position.GetY() };
		secondSide = new Line(vertiacalSidesLength, 0, fillCharacter, linePosition, 1);

		if (horizontalSidesLength % 2 == 0)
			linePosition = { position.GetX() + (horizontalSidesLength / 2), position.GetY() };
		else
			linePosition = { position.GetX() + (horizontalSidesLength / 2) + 1, position.GetY() };

		thirdSide = new Line(vertiacalSidesLength, 0, fillCharacter, linePosition, 1);

		linePosition = { position.GetX(), position.GetY() + (vertiacalSidesLength - 1) };
		fourthSide = new Line(horizontalSidesLength, 0, fillCharacter, linePosition, 0);
	}

	~Rectangle();

	void Draw(string* drawArea) override;
};

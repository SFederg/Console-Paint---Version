#include "Shape.h"

Shape::Shape()
{
	position = { 0, 0 };
	fillCharacter = ' ';
}


Shape::Shape(Position position, char fillCharacter)
{
	this->position = position;
	this->fillCharacter = fillCharacter;
}

Position Shape::GetPosition()
{
	return position;
}

char Shape::GetFillCharacter()
{
	return fillCharacter;
}
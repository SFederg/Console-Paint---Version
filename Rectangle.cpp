#include "Rectangle.h"

Rectangle::~Rectangle()
{
	delete firstSide;
	delete secondSide;
	delete thirdSide;
	delete fourthSide;
}

void Rectangle::Draw(string* drawArea)
{
	firstSide->Draw(drawArea);
	secondSide->Draw(drawArea);
	thirdSide->Draw(drawArea);
	fourthSide->Draw(drawArea);
}

Rectangle& Rectangle::operator =(Shape* shape)
{
	position = shape->GetPosition();
	fillCharacter = shape->GetFillCharacter();
	return *this;
}
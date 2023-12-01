#include "Triangle.h"

Triangle::~Triangle()
{
	delete firstSide;
	delete secondSide;
	delete thirdSide;
}

void Triangle::Draw(string* drawArea)
{
	firstSide->Draw(drawArea);
	secondSide->Draw(drawArea);
	thirdSide->Draw(drawArea);
}
#include "Circle.h"

Circle::~Circle()
{

}

void Circle::Draw(string* drawArea)
{
	int radius = this->radius;
	int centerX = position.GetX();
	int centerY = position.GetY();

	for (int y = -radius; y <= radius + centerY; y++)
	{
		for (int x = -radius; x <= radius + centerX; x++)
		{
			if (((x - centerX) * (x - centerX) + (y - centerY) * (y - centerY)) <= (radius * radius))
			{
				if ((x + centerX) < drawArea[0].length() && (y + centerY) < drawArea->length())
				{
					drawArea[y + centerY][x + centerX] = fillCharacter;
				}
			}
		}
	}
}

Circle& Circle::operator =(Shape* shape)
{
	position = shape->GetPosition();
	fillCharacter = shape->GetFillCharacter();
	return *this;
}
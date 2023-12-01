#include "Line.h"

Line::~Line()
{

}

void Line::Draw(string* drawArea)
{
	int correctCountPoints = countPoints;
	int y = -1, x = -1 * (correctCountPoints / 2);

	while (correctCountPoints != 0)
	{
		int flag = 1;
		if (!isArgumentConst)
		{
			x++;
			y = -1 * angleFactor * x;
			flag = ((-1 * angleFactor * x) - int(-1 * angleFactor * x)) == 0;
		}
		else
		{
			x = 0;
			y++;
		}

		if (flag)
		{
			correctCountPoints--;
			if ((x + position.GetX()) < drawArea[0].length() && (y + position.GetY()) < drawArea->length())
				drawArea[y + position.GetY()][x + position.GetX()] = fillCharacter;
		}
	}
}
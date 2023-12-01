#include "Canvas.h"

string* Canvas::drawArea = new string[Canvas::height];

void Canvas::Clear()
{
	for (int i = 0; i < height; i++)
	{
		string str = "";
		for (int j = 0; j < width; j++)
		{
			str += fillCharacter;
		}
		drawArea[i] = str;
	}
}

void Canvas::Add(Shape* shape)
{
	shape->Draw(drawArea);
}

void Canvas::Add(Group* group)
{
	group->Draw(drawArea);
}

void Canvas::Display()
{
	for (int i = 0; i < height; i++)
	{
		cout << drawArea[i] << endl;
	}
}
#include "Canvas.h"

Canvas::Canvas(int width, int height, char fillCharacter)
{
	this->width = width;
	this->height = height;
	this->fillCharacter = fillCharacter;
	drawArea = new string[Canvas::height];
	Clear();
}

Canvas::~Canvas()
{
	delete drawArea;
}


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
	for (int i = 0; i < height; i++)
		if (drawArea[i].empty())
			throw "Canvas is not clear";

	shape->Draw(drawArea);
}

void Canvas::Add(Group* group)
{
	for (int i = 0; i < height; i++)
		if (drawArea[i].empty())
			throw "Canvas is not clear";

	group->Draw(drawArea);
}

void Canvas::Display()
{
	for (int i = 0; i < height; i++)
		if (drawArea[i].empty())
			throw "Canvas is not clear";

	for (int i = 0; i < height; i++)
	{
		cout << drawArea[i] << endl;
	}
}

Canvas& Canvas::operator<<(Canvas canvas)
{
	for (int i = 0; i < height; i++)
	{
		cout << drawArea[i] << endl;
	}
	return *this;
}
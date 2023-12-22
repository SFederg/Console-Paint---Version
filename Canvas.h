#pragma once
#include "Shape.h"
#include "Group.h"
#include <iostream>

using namespace std;

class Canvas
{
private:
	int width;
	int height;
	char fillCharacter = ' ';
	string *drawArea;
public:
	Canvas(int width, int height, char fillCharacter);

	~Canvas();

	void Clear();

	void Add(Shape* shape);

	void Add(Group* group);

	void Display();

	Canvas& operator<<(Canvas canvas);
};
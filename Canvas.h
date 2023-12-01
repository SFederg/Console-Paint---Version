#pragma once
#include "Shape.h"
#include "Group.h"
#include <iostream>

using namespace std;

class Canvas
{
private:
	static const int width = 100;
	static const int height = 50;
	static const char fillCharacter = ' ';
	static string *drawArea;
public:
	static void Clear();

	static void Add(Shape* shape);

	static void Add(Group* group);

	static void Display();
};
#pragma once
#include "Shape.h"
#include "Circle.h"

class Group
{
private:
	static const int maxCountShapes = 3;
	int currentCountShapes;
	Shape* shapes[maxCountShapes];

public:
	Group();

	~Group();

	bool TryAddShape(Shape* shape);

	Shape* GetShapePointer(int shapeNumber);

	Shape& GetShapeReference(int shapeNumber);

	void Draw(string* drawArea);
};
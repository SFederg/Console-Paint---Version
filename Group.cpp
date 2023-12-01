#include "Group.h"

Group::Group()
{
	currentCountShapes = 0;
	Position position = { 0, 0 };
	Circle circle(5, '#', position);
	shapes[0] = &circle;
}

Group::~Group()
{
	for (int i = 0; i < maxCountShapes; i++)
		delete shapes[i];
}

bool Group::TryAddShape(Shape* shape)
{
	currentCountShapes++;
	if (currentCountShapes > maxCountShapes)
		return false;

	shapes[currentCountShapes - 1] = shape;
	return true;
}

Shape* Group::GetShapePointer(int shapeNumber)
{
	return shapes[shapeNumber];
}

Shape& Group::GetShapeReference(int shapeNumber)
{
	return *shapes[shapeNumber];
}

void Group::Draw(string* drawArea)
{
	if (currentCountShapes > 0)
	{
		for (int i = 0; i < currentCountShapes; i++)
		{
			shapes[i]->Draw(drawArea);
		}
	}
}
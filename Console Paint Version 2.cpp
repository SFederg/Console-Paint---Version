#include "Canvas.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Group.h"

int main()
{
    Shape* shapes[8];
    Position position = {74, 34};
    Line line1(9, 0, '*', position, 1);
    shapes[0] = &line1;

    position = { 86, 34 };
    Line line2(9, 0, '*', position, 1);
    shapes[1] = &line2;

    position = { 86, 25 };
    Line line3(9, 1, '*', position, 0);
    shapes[2] = &line3;

    position = { 71, 22 };
    Line line4(9, -1, '*', position, 0);
    shapes[3] = &line4;

    position = {75, 30};
    Triangle triangle1(9, '0', position);
    shapes[4] = &triangle1;

    position = {40, 10};
    Circle circle(5, '#', position);
    shapes[5] = &circle;

    position = { 30, 20 };
    Rectangle rectangle(20, 40, '=', position);
    shapes[6] = &rectangle;

    position = { 19, 11 };
    Triangle triangle(21, '0', position);
    shapes[7] = &triangle;

    Canvas::Clear();

    for (int i = 0; i < 8; i++)
    {
        Canvas::Add(shapes[i]);
    }

    Canvas::Display();
    Canvas::Clear();

    Group group;
    group.TryAddShape(shapes[6]);
    group.TryAddShape(shapes[7]);

    Canvas::Add(&group);
    Canvas::Display();

    Shape* shape1 = group.GetShapePointer(0);
    Shape& shape2 = group.GetShapeReference(1);
}
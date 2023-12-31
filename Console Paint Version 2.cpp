﻿#include "Canvas.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Group.h"
#include "Finder.h"
#include <vector>

int main()
{
    try
    {
        Position position = { 74, 34 };
        Line line1(9, 0, '*', position, true);

        position = { 86, 34 };
        Line line2(9, 0, '*', position, true);

        position = { 86, 25 };
        Line line3(9, 1, '*', position, false);

        position = { 71, 22 };
        Line line4(9, -1, '*', position, false);

        vector<Shape*> lines = {&line1, &line2, &line3, &line4};

        position = { 75, 30 };
        Triangle triangle1(9, '0', position);

        Shape* shape5 = &triangle1;
        line2 = shape5;

        position = { 19, 11 };
        Triangle triangle(21, '0', position);

        vector<Shape*> triangles = { &triangle1, &triangle };

        position = { 40, 10 };
        Circle circle(5, '#', position);
        vector<Shape*> circles = { &circle };

        position = { 30, 20 };
        Rectangle rectangle(20, 40, '=', position);
        vector<Shape*> rectangles = { &rectangle };

        vector<vector<Shape*>> shapes = {lines, triangles, circles, rectangles};

        Canvas canvas(100, 50, ' ');

        for (int i = 0; i < shapes.size(); i++)
        {
            for (int j = 0; j < shapes[i].size(); j++)
            {
                canvas.Add(shapes[i][j]);
            }
        }

        canvas << canvas;
    }
    catch (const invalid_argument& e)
    {
        cout << e.what() << endl;
    }
    catch (const char *e)
    {
        cout << e << endl;
    }
}
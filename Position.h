#pragma once
class Position
{
private:
	int x;
	int y;
public:
	Position();

	Position(int x, int y);

	~Position();

	int GetX();

	int GetY();

	friend Position operator + (Position& position1, Position& position2);

	Position& operator ++();

	Position operator ++(int);
};
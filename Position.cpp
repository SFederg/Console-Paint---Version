#include "Position.h"

Position::Position()
{
	this->x = 0;
	this->y = 0;
}

Position::Position(int x, int y)
{
	this->x = x;
	this->y = y;
}

Position::~Position()
{

}

int Position::GetX()
{
	return x;
}

int Position::GetY()
{
	return y;
}

Position operator + (Position& position1, Position& position2)
{ 
	return Position{ position1.x + position2.x, position1.y + position2.y };
}

Position& Position::operator ++()
{
	x++;
	y++;
	return *this;
}

Position Position::operator ++(int)
{
	Position temp = *this;
	++* this;
	return temp;
}
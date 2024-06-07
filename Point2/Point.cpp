#include "Point.h"

int Point::CrtPon = 0;

void Point::Setx(int a)
{
	x = a;
}

void Point::Sety(int d)
{
	y = d;
}

int Point::Getx() const
{
	return x;
}

int Point::Gety() const
{
	return y;
}

void Point::Print() const
{
	cout << "Coordinate x ->" << x << endl << "Coordinate y ->" << y << endl;
}

void Point::CrtPon1()
{
	cout << "Number of points created ->" << CrtPon << endl;
}

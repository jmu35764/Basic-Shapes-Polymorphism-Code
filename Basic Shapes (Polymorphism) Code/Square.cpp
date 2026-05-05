#include "Square.h"

Square::Square(double s, string n):Rectangle(s, s, n)
{
	setName(n);
}

void Square::setSide(double s)
{
	side = s;
	
	setLength(s);
	setWidth(s);
}


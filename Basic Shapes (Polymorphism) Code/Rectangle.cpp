#include "Rectangle.h"

Rectangle::Rectangle(double l, double w, string n) : length(l), width(w)
{
	setName(n);
	calcArea();
}

void Rectangle::calcArea()
{
	setArea(length * width);
}

void Rectangle::setLength(double l)
{
	length = l;
}

void Rectangle::setWidth(double w)
{
	width = w;
}
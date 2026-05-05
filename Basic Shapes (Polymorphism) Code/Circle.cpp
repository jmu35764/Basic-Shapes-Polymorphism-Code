#include "Circle.h"
#include <numbers>

using namespace std;


Circle::Circle(double x, double y, double r, string n)
	: xCenter(x), yCenter(y), radius(r)
{
	setName(n);
	calcArea();
}

void Circle::calcArea()
{
	const double pi = numbers::pi;
	setArea(radius * radius * pi);
}

void Circle::setxCenter(double x)
{
	xCenter = x;
}

void Circle::setyCenter(double y)
{
	yCenter = y;
}

void Circle::setRadius(double r)
{
	radius = r;
}

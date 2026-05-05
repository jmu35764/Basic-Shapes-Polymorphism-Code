#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"
#include <string>

class Circle : public BasicShape
{
private:
	double xCenter;
	double yCenter;
	double radius;

public:
	Circle(double x, double y, double r, string n = "Cirle");

	//Overrided Area Calculation
	void calcArea() override;
	
	//Setters
	void setxCenter(double x);

	void setyCenter(double y);

	void setRadius(double r);

	//Getters
	double getxCenter() const
	{
		return xCenter;
	}

	double getyCenter() const
	{
		return yCenter;
	}

	double getRadius() const
	{
		return radius;
	}
};

#endif
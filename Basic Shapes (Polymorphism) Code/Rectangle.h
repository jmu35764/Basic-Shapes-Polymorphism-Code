#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape
{
private:
	double length;
	double width;

public:
	
	Rectangle(double l, double w, string n = "Rectangle");


	void calcArea() override;
	
	//Setters
	void setLength(double l);

	void setWidth(double w);

	//Getters
	double getLength() const
	{
		return length;
	}

	double getWidth() const
	{
		return width;
	}



};

#endif


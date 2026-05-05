#ifndef SQUARE_H
#define SQAURE_H

#include "Rectangle.h"
#include <string>

using namespace std;

class Square : public Rectangle
{
private:
	double side;

public:
	// Constructor
	Square(double s, string n = "Square");

	//Setters
	void setSide(double s);

	double getSide() const
	{
		return side;
	}

};

#endif
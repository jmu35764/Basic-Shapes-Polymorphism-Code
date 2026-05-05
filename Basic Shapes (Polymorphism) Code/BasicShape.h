#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>

using namespace std;

class BasicShape
{
private:
	double area;
	string name;

public:

	BasicShape();

	~BasicShape();

	// Setters
	void setName();

	void setArea();

	//Getters
	string getName() const
	{
		return name;
	}

	double getArea() const
	{
		return area;
	}

	virtual void calcArea() = 0;

};


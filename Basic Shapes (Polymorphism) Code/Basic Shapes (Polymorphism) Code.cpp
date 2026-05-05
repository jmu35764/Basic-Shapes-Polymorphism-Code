// Basic Shape, s (Polymorphism) Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <numbers>
#include <string>

#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

//void PrintShape()


int main()
{
	cout << "/////***CONSTRCUTOR TEST***/////" << endl;
	
	Rectangle r1(5, 6, "Rect1");
	Rectangle r2(11, 9, "Rect2");

	Circle c1(5, 4, 3, "Circ1");
	Circle c2(9, 8, 7, "Circ2");

	Square s1(4, "Sqaure1");


	cout << r1.getName() << " Area: " << setprecision(4) << r1.getArea() << endl;
	cout << r2.getName() << " Area: " << setprecision(4) << r2.getArea() << endl;

	cout << c1.getName() << " Area: " << setprecision(4) << c1.getArea() << endl;
	cout << c2.getName() << " Area: " << setprecision(4) << c2.getArea() << endl;

	cout << s1.getName() << " Area: " << setprecision(4) << s1.getArea() << endl;

	
	cout << "/////***POLYMORPHISM TEST***/////" << endl;

	const int shape_num = 5;

	BasicShape* ShArr[shape_num] = { &r1, &r2, &c1, &c2, &s1 };


	for (int i = 0; i < shape_num; i++)
	{
		cout << ShArr[i]->getName() << " Area: " << setprecision(4) << ShArr[i]->getArea() << endl;
	}

	cout << "/////***SETTER TEST***/////" << endl;

	cout << "CIRCLE TEST" << endl;

	c1.setRadius(5);
	cout << "New Radius: " << c1.getRadius() << endl << "New Area: " << c1.getArea() << endl;

	c1.setxCenter(6);
	c1.setyCenter(6);

	cout << "New X Center: " << c1.getxCenter() << endl << "New Y Center: " << c1.getyCenter() << endl;

	cout << c1.getName() << " " << "Area: " << c1.getArea() << endl << endl;

	
	cout << "RECTANGLE TEST" << endl;
	
	r1.setLength(6);

	cout << r1.getName() << " " << "New Length: " << r1.getLength() << "Area: " << r1.getArea() << endl;

	r1.setWidth(7);

	cout << r1.getName() << " " << "New Width: " << r1.getWidth() << "Area: " << r1.getArea() << endl << endl;


	cout << "SQUARE TEST" << endl;

	s1.setSide(8);

	cout << s1.getName() << " " << "New Side: " << s1.getSide() << "Area: " << s1.getArea() << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

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

	BasicShape* ShArr[shape_num];


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

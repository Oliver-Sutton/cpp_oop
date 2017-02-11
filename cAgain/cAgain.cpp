// cAgain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Rectangle {

	int width, height;

public:
	Rectangle() { width = 5; height = 5; };
	Rectangle(int x, int y) { width = x; height = y; };
	int area() { return width * height; }; 
};

class Circle {
	double radius;
public:
	Circle() { radius = 1; };
	Circle(double r) { radius = r; };
	double circum() { return 2 * radius * 3.1415; };
	double area() { return (radius * radius) * 3.1415; };
	double getRadius() { return radius; };
	double segmentArea(double angle) { double area = (radius * radius) * 3.1415;return (area / 360) * angle; };
};


int main()
{
	Rectangle recta(2,2), rectb;
	cout << "Area A: " << recta.area() << endl;
	cout << "Area B: " << rectb.area() << endl;

	int width = 0;
	int height = 0;
	cout << "Width : ";
	cin >> width; 
	cout << "Height : ";
	cin >> height;

	Rectangle rectc(width, height);

	cout << rectc.area() << endl;;

	double angle = 360;

	Circle circa, circb(3.2);
	cout << "Circumferance A: " << circa.circum() << endl;
	cout << "Radius A: " << circa.getRadius() << endl;
	cout << "Area A: " << circa.area() << endl;
	cout << "Circumferance B: " << circb.circum() << endl;
	cout << "Radius B: " << circb.getRadius() << endl;
	cout << "Area B: " << circb.area() << endl;
	cout << "Angle of segment :";
	cin >> angle;
	cout << "Area of segemnt : " << circb.segmentArea(angle) << endl;

    return true;
}


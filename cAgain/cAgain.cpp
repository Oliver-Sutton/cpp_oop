// cAgain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
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

class Cat {

	string name;
	int age;
	double weight;

public:

	Cat() { name = "Cat Name"; age = 0; weight = 10; };
	Cat(string catName, int catAge, double catWeight) { name = catName; age = catAge;  weight = catWeight; };

	string getName() { return name; };
	int getAge() { return age; };
	double getWeight() { return weight; };

	void changeName(string catName) { name = catName; };
	void changeAge(int catAge) { age = catAge; };
	void changeWeight(double catWeight) { weight = catWeight; }

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

	Cat catRandom, catFrodo("Frodo", 4, 15.1);

	cout << "Random Cat \nName : " << catRandom.getName() << endl << "Age : " << catRandom.getAge() << endl << "Weight : " << setprecision(3) << catRandom.getWeight() << endl;
	cout << "Frodo \nName : " << catFrodo.getName() << endl << "Age : " << catFrodo.getAge() << endl << "Weight : " << setprecision(3) << catFrodo.getWeight() << endl;

    return 0;

}


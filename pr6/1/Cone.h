#pragma once
#include <iostream>

using namespace std;

class Cone
{
	const double pi = 3.14159265;

	double x, y, z, radius, height;
public:
	Cone();
	Cone(double r, double h);
	Cone(double a, double b, double c, double r, double h);

	void setCoordinate(double a, double b, double c);
	void setHeight(double h);
	void setRadius(double r);

	double getRadius();
	double getHeight();

	double area();
	double volume();

	friend ostream& operator<<(ostream& stream, Cone obj);
};


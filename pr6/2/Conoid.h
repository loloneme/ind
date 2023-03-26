#pragma once
#include "Cone.h"
class Conoid:public Cone
{
	double r1, r2, x, y, z, h;
public:
	Conoid();
	Conoid(double rad1, double rad2, double height);
	Conoid(double a, double b, double c, double rad1, double rad2, double height);
	
	void setRadius(double rad1, double rad2);

	double area();
	double volume();

	friend ostream& operator<<(ostream& stream, Conoid obj);
	friend istream& operator>>(istream& stream, Conoid &obj);

	friend bool operator<(Conoid con1, Conoid con2);
	friend bool operator>(Conoid con1, Conoid con2);
	friend bool operator==(Conoid con1, Conoid con2);
};


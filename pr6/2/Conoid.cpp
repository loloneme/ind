#include "Conoid.h"
#include <iostream>

using namespace std;

Conoid::Conoid() { r1 = r2 = x = y = z = h = 0; }

Conoid::Conoid(double rad1, double rad2, double height) {
	r1 = rad1;
	r2 = rad2;
	h = height;
	x = y = z = 0.0;
}

Conoid::Conoid(double a, double b, double c, double height, double rad1, double rad2) {
	x = a;
	y = b;
	z = c;
	r1 = rad1;
	r2 = rad2;
	h = height;
}

void Conoid::setRadius(double rad1, double rad2) {
	r1 = rad1;
	r2 = rad2;
}

double Conoid::area() {
	double max_rad = max(r1, r2), min_rad = min(r1, r2);
	double l = sqrt(h * h + (max_rad - min_rad) * (max_rad - min_rad));

	return pi * (r1 * r1 + (r1 + r2) * l + r2 * r2);

}

double Conoid::volume() {
	return pi * h * (r1 * r1 + r1 * r2 + r2 * r2) / 3;
}

ostream& operator<<(ostream& stream, Conoid obj) {
	stream << "(" << obj.x << "; ";
	stream << obj.y << "; ";
	stream << obj.z << ") ";
	stream << "r1=" << obj.r1 << " r2=" << obj.r2 << " ";
	stream << "h=" << obj.h << "\n";

	return stream;
}

istream& operator>>(istream& stream, Conoid &obj) {
	cout << "¬ведите сначала координаты, далее радиусы 1 и 2 и высоту через пробел: ";
	stream >> obj.x >> obj.y >> obj.z >> obj.r1 >> obj.r2 >> obj.h;

	return stream;
}

bool operator<(Conoid con1, Conoid con2) {
	if (con1.volume() < con2.volume()) {
		return true;
	}
	return false;
}

bool operator>(Conoid con1, Conoid con2) {
	if (con1.volume() > con2.volume()) {
		return true;
	}
	return false;
}

bool operator==(Conoid con1, Conoid con2) {
	if (con1.r1 == con2.r1 and con1.r2 == con2.r2 and con1.h == con2.h) {
		return true;
	}
	return false;
}


#include "Circle.h"
#include <cmath>

Circle::Circle() {}


explicit Circle::Circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}

void Circle::set_circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}

float Circle::square() {
	return 3.14 * radius * radius;
}

bool Circle::triangle_around(float a, float b, float c) {
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	float r = a * b * c / (4 * s);
	return r == radius;
}

bool Circle::triangle_in(float a, float b, float c) {
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	float r = s / p;
	return r == radius;
}

bool Circle::check_circle(float r, float x_cntr, float y_cntr) {
	float d = sqrt(pow(abs(x_center - x_cntr), 2) + pow(abs(y_center - y_cntr), 2));
	return radius + r < d;
}
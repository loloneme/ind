#include "Figure.h"
#include <cmath>
#include <iostream>


using namespace std;

Figure::Figure(){
	Figure(0, 0, 0, 0, 0, 0, 0, 0);
}

Figure::Figure(float x1, float x2,
	float x3, float x4, float y1,
	float y2, float y3, float y4): x1(x1), x2(x2), x3(x3), x4(x4), y1(y1), y2(y2), y3(y3), y4(y4) {
	p = x1 + x2 + x3 + x4 + y1 + y2 + y3 + y4;
	s = abs((x1 - x2) * (y1 + y2) + (x2 - x3) * (y2 + y3) + (x3 - x4) * (y3 + y4) + (x4 - x1) * (y4 + y1)) / 2;
}

void Figure::show() {
	cout << "Координата 1 точки четырехугольника: (" << x1 << ", " << y1 << ") \n";
	cout << "Координата 2 точки четырехугольника: (" << x2 << ", " << y2 << ") \n";
	cout << "Координата 3 точки четырехугольника: (" << x3 << ", " << y3 << ") \n";
	cout << "Координата 4 точки четырехугольника: (" << x4 << ", " << y4 << ") \n";
	cout << "Периметр: " << p << endl;
	cout << "Площадь: " << s << endl;
}

double Figure::angle(float x11, float y11, float x12, float y12, float x21, float y21, float x22, float y22) {
	float v1_x = x12 - x11, v1_y = y12 - y11, v2_x = x22 - x21, v2_y = y22 - y21;
	double t = (abs(v1_x * v2_x + v1_y * v2_y)) / (sqrt(pow(v1_x, 2) + pow(v1_y, 2)) * sqrt(pow(v2_x, 2) + pow(v2_y, 2)));
	if (t < -1) t = -1;
	else if (t > 1) t = 1;
	return (180 / PI) * acos(t);
}

float Figure::d(float x11, float y11, float x22, float y22) {
	return sqrt(pow(x22 - x11, 2) + pow(y22 - y11, 2));
}

bool Figure::is_prug() {
	return ((int)angle(x1, y1, x2, y2, x1, y1, x4, y4) == 90 &&
		(int)angle(x2, y2, x3, y3, x2, y2, x1, y1) == 90 &&
		(int)angle(x3, y3, x2, y2, x3, y3, x4, y4) == 90 &&
		(int)angle(x4, y4, x3, y3, x4, y4, x1, y1) == 90);
}


bool Figure::equal_sides() {
	return (d(x1, y1, x2, y2) == d(x2, y2, x3, y3) &&
			d(x2, y2, x3, y3) == d(x3, y3, x4, y4) &&
			d(x3, y3, x4, y4) == d(x4, y4, x1, y1) &&
			d(x4, y4, x1, y1) == d(x1, y1, x2, y2));
}

bool Figure::is_square() {
	return is_prug() && equal_sides();
}


bool Figure::is_romb() {
	return equal_sides();
}

bool Figure::is_in_circle() {
	return ((int)angle(x1, y1, x2, y2, x1, y1, x4, y4) + (int)angle(x3, y3, x2, y2, x3, y3, x4, y4) == 180) &&
		((int)angle(x2, y2, x1, y1, x2, y2, x3, y3) + (int)angle(x4, y4, x1, y1, x4, y4, x3, y3) == 180);
}

bool Figure::is_out_circle(){
	return (d(x1, y1, x2, y2) + d(x3, y3, x4, y4) == d(x2, y2, x3, y3) + d(x4, y4, x1, y1));
}



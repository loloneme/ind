#include "eq2.h"
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

Eq2::Eq2():a(0), b(0), c(0), D(0){
}


Eq2::Eq2(double a1, double b1, double c1):a(a1), b(b1), c(c1) {
	D = b * b - 4 * a * c;
}

void Eq2::set(double a1, double b1, double c1) {
	a = a1; b = b1; c = c1;
	D = b * b - 4 * a * c;
}

double Eq2::find_X() {
	if (D > 0) {
		cout << "Корня два. Наибольший из них: ";
		double x1 = (-b - sqrt(D)) / (2 * a);
		double x2 = (-b + sqrt(D)) / (2 * a);
		return max(x1, x2);
	}
	else if (D == 0) {
		cout << "Корень один: ";
		double x = (-b - sqrt(D)) / (2 * a);
		return x;
	}
	cout << "Корней нет" << endl;
	return 0;
}

double Eq2::find_Y(double x1) {
	return a * x1 * x1 + b * x1 + c;
}

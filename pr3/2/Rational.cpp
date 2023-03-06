#include "Rational.h"
#include <iostream>

using namespace std;

int Rational::gcd(int n1, int n2) {
	if (n1 == n2) {
		return n1;
	}
	if (n1 > n2) {
		swap(n1, n2);
	}
	return gcd(n1, n2 - n1);
}

Rational::Rational() {
	a = 0;
	b = 1;
}


Rational::Rational(int a1, int b1){
	if (b1 != 0){
		int g = gcd(a1, b1);
		a = a1 / g; 
		b = b1 / g;
		if (a > b) {
			a = a % b;
		}
	}
	else {
		cout << "Знаменатель не может быть равен нулю!! Дробь будет изменена на: 0/1\n";
		Rational();
	}
}

void Rational::set(int a1, int b1) {
	if (b1 != 0) {
		int g = gcd(a1, b1);
		a = a1 / g;
		b = b1 / g;
		if (a > b) {
			a = a % b;
		}
		else if (a == b) {
			cout << "Дробь сократилась до целого числа, дробная часть была изменена на 0/1\n";
			a = 0;
			b = 1;
		}
	}
	else {
		cout << "Знаменатель не может быть равен нулю!! Дробь будет изменена на: 0/1\n";
		a = 0;
		b = 1;
	}
}

void Rational::show() {
	cout << a << "/" << b << endl;
}

void Rational::operator++(int n) {
	this->set(a + 1, b);
}

Rational Rational::operator+(Rational& r2) {
	Rational temp = Rational();
	temp.set(a * r2.b + r2.a * b, b * r2.b);
	return temp;
}

void Rational::operator=(Rational& r) {
	this->set(r.a, r.b);
}

Rational::~Rational() {}
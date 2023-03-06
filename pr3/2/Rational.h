#pragma once
class Rational
{
private: 
	int a, b;

public:
	Rational();
	Rational(int a1, int b1);
	void set(int a1, int b1);
	void show();
	int gcd(int n1, int n2);
	friend Rational operator-(Rational &r1, Rational &r2);
	void operator++(int n);
	friend bool operator==(Rational &r1, Rational &r2);
	friend bool operator>(Rational &r1, Rational &r2);
	Rational operator+(Rational& r2);
	void operator=(Rational& r);

	~Rational();
};



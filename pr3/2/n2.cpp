#include "Rational.h"
#include <iostream>

using namespace std;

Rational operator- (Rational &r1, Rational &r2) {
	Rational r = Rational(r1.a * r2.b - r2.a * r1.b, r1.b * r2.b);
	return  r;
}

bool operator==(Rational &r1, Rational &r2) {
	if (r1.a == r2.a && r1.b == r2.b) {
		return true;
	}
	return false;
}

bool operator>(Rational &r1, Rational &r2) {
	if (r1.a * r2.b > r2.a * r1.b) {
		return true;
	}
	return false;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int n, a, b, n1, n2;
	cout << "Введите количество дробей: ";
	cin >> n;
	Rational* fracs = new Rational[n];
	for (int i = 0; i < n; i++) {
		cout << "\nВведите числитель и знаменатель дроби " << i + 1 << endl;
		cin >> a >> b;
		fracs[i].set(a, b);
		fracs[i].show();
	}

	cout << "\nВведите номера дробей, сумму которых нужно вычислить: ";
	cin >> n1 >> n2;
	Rational sum = fracs[n1 - 1] + fracs[n2 - 1];
	sum.show();

	cout << "\nВведите номера дробей, разность которых нужно вычислить: ";
	cin >> n1 >> n2;
	(fracs[n1 - 1] - fracs[n2 - 1]).show();

	cout << "\nВведите номер дроби, числитель которой хотите увеличить на единицу: ";
	cin >> n1; 
	fracs[n1 - 1]++;
	fracs[n1 - 1].show();

	cout << "\nВведите номера дробей, равенство которых хотите проверить: ";
	cin >> n1 >> n2;
	cout << (fracs[n1 - 1] == fracs[n2 - 1]);

	cout << "\nВведите номера дробей, которые хотите сравнить: ";
	cin >> n1 >> n2;
	cout << (fracs[n1 - 1] > fracs[n2 - 1]);

	cout << "\nВведите номера дробей для присваивания значения: ";
	cin >> n1 >> n2;
	n1 = n2;
	cout << n1;

	delete fracs;
}

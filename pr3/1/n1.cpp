#include "eq2.h"
#include <iostream>

using namespace std;

Eq2 operator+ (Eq2 e1, Eq2 e2) {
	Eq2 e;
	e.set(e1.a + e2.a, e1.b + e2.b, e1.c + e2.c);
	return e;
}

int main()
{
    setlocale(LC_ALL, "rus");
    double a1, b1, c1, a2, b2, c2, x;
    cout << "Введите коэффициенты 1 уравнения:\n";
    cin >> a1 >> b1 >> c1;
    Eq2 e1(a1, b1, c1);
    cout << e1.find_X() << "\nВведите х: \n";
    cin >> x;
    cout << "Y=" << e1.find_Y(x) << endl;
    cout << "Введите коэффициенты 2 уравнения:\n";
    cin >> a2 >> b2 >> c2;
    Eq2 e2(a2, b2, c2);
    cout << e2.find_X() << "\nВведите х: \n";
    cin >> x;
    cout << "Y=" << e2.find_Y(x) << "\n Сложим уравнения: ";
    Eq2 e = e1 + e2;
    cout << e.a << " " << e.b << " " << e.c;
    return 0;
}

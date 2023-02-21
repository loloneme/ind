#include "Circle.h"
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    Circle mas[3];
    double r, x, y, a, b, c, rad, x2, y2;
    for (int i = 0; i < 3; i++) {
        cout << "Введите радиус и координаты " << i + 1 << "окружности: \n";
        cin >> r >> x >> y;
        mas[i].set_circle(r, x, y);
        cout << "Площадь окружности: " << mas[i].square();
        cout << "Введите значения сторон треугольника, чтобы проверить можно ли описать вокруг него данную окружность: \n";
        cin >> a >> b >> c;
        if (mas[i].triangle_around(a, b, c)) {
            cout << "Можно :) \n";
        }
        else {
            cout << "Нельзя.......... \n";
        }
        cout << "Введите значения сторон треугольника, чтобы проверить, можно ли вписать в него данную окружность: \n";
        cin >> a >> b >> c;
        if (mas[i].triangle_in(a, b, c)) {
            cout << "Можно :) \n";
        }
        else {
            cout << "Нельзя.......... \n";
        }
        cout << "Введите радиус и координаты какой нибудь окружности, чтобы проверить, пересекается ли она с данной: \n";
        cin >> rad >> x2 >> y2;
        if (mas[i].check_circle(rad, x2, y2)) {
            cout << "Можно :) \n";
        }
        else {
            cout << "Нельзя.......... \n";
        }
    }
}
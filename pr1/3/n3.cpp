#include "Figure.h"
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x1, y1, x2, y2, x3, y3, x4, y4;
    for (int i = 0; i < 3; i++) {
        cout << "Введите координаты точек " << i + 1 << " четырехугольника: \n";
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        Figure f(x1, x2, x3, x4, y1, y2, y3, y4);
        f.show();
        if (f.is_prug()) {
            cout << "Это прямоугольник! \n";
        }
        else {
            cout << "Это не прямоугольник(( \n";
        }
        if (f.is_square()) {
            cout << "Это квадрат! \n";
        }
        else {
            cout << "Это не квадрат(( \n";
        }
        if (f.is_romb()) {
            cout << "Это ромб! \n";
        }
        else {
            cout << "Это не ромб(( \n";
        }
        if (f.is_in_circle()) {
            cout << "Можно вписать в окружность \n";
        }
        else {
            cout << "Нельзя вписать в окружность \n";
        }
        if (f.is_out_circle()) {
            cout << "В четырехугольник можно вписать окружность \n";
        }
        else {
            cout << "В четырехугольник нельзя вписать окружность \n";
        }
    }

}
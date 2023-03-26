#include <iostream>
#include "Cone.h"
#include "Conoid.h"

using namespace std;



 
int main() {
    setlocale(LC_ALL, "rus");

    Conoid c1;
    cin >> c1;
    cout << "Усеченный конус 1: " << c1; 
    cout << "Площадь поверхности: " << c1.area() << "\n";
    cout << "Объем: " << c1.volume() << "\n";

    Conoid c2(2, 5, 10); //усеченный конус который находится в начале координат
    cout << "Усеченный конус 2: " << c2;
    cout << "Площадь поверхности: " << c2.area() << "\n";
    cout << "Объем: " << c2.volume() << "\n";

    Conoid c3(1, 2, 3, 2, 5, 10);
    cout << "Усеченный конус 3: " << c3;
    cout << "Площадб поверхности: " << c3.area() << "\n";
    cout << "Объем: " << c3.volume() << "\n";

    cout << "1 конус больше 3?  ";
    bool a = c1 > c3;
    cout << a << endl;

    cout << "1 конус меньше 2?  ";
    a = c1 < c2;
    cout << a << endl;

    cout << "Конус 2 равен конусу 3? ";
    a = c2 == c3;
    cout << a << endl;


    return 0;

}

#include <iostream>
#include "Ocean.h"
#include "Sea.h"
#include "Bay.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	Ocean o1("Тихий океан", 9, 157, 10994, 34.5, 178684000, 710360000);
	cout << o1;
	Sea s1("Море Лаптевых", "Северный ледовитый", 76, 125, 3385, 34, 672000, 363000);
	cout << s1;
	Sea s2("Каспийское море", 42, 51, 1025, 12.9, 390000, 78000);
	cout << s2;
	Bay b1("Ботнический залив", "Балтийское море", "", 62, 19, 295, 117000);
	cout << b1;
	return 0;
}

#include "Bay.h"
#include <iostream>

using namespace std;

Bay::Bay(){ latitude = longitude = max_depth = square = 0; }

Bay::Bay(string n, string sea, string ocean, double lat, double l, double depth, long long s) {
	bayName = n;
	this->seaName = sea;
	this->oceanName = ocean;
	latitude = lat;
	longitude = l;
	max_depth = depth;
	square = s;
}

ostream& operator<<(ostream& stream, Bay& bay) {
	setlocale(LC_ALL, "rus");
	stream << "\nНазвание: " << bay.bayName;
	if (bay.oceanName != "") {
		stream << "\nОкеан: " << bay.oceanName;
	}
	else {
		stream << "\nНе является частью океана";
	}
	if (bay.seaName != "") {
		stream << "\nМоре: " << bay.seaName;
	}
	else {
		stream << "\nНе является частью моря";
	}
	stream << "\nШирота: " << bay.latitude << "\nДолгота: " << bay.longitude;
	stream << "\nМакс. глубина: " << bay.max_depth << "м\nПлощадь: " << bay.square << "км^2";

	return stream;
}

istream& operator>>(istream& stream, Bay& bay) {
	setlocale(LC_ALL, "rus");
	int a;
	stream >> bay.seaName;
	cout << "\nЗалив входит в море? Введите 1, если да, иначе введите 0 ";
	cin >> a;
	if (a == 1) {
		cout << "\nВведите название моря: ";
		stream >> bay.seaName;
	}
	cout << "\nЗалив входит в океан? Введите 1, если да, иначе введите 0 ";
	cin >> a;
	if (a == 1) {
		cout << "\nВведите название океана: ";
		stream >> bay.oceanName;
	}
	stream >> bay.latitude >> bay.longitude >> bay.max_depth >> bay.square;

	return stream;
}

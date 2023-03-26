#include "Ocean.h"
#include <iostream>
#include <string>

using namespace std;

Ocean::Ocean() { latitude = longitude = max_depth = salinity = square = volume = 0;  }

Ocean::Ocean(string n, double lat, double l, double depth, double salt, long long s, long long v) : oceanName(n), latitude(lat), longitude(l),
max_depth(depth), salinity(salt), square(s), volume(v) {}

ostream& operator<<(ostream& stream, Ocean& ocean) {
	setlocale(LC_ALL, "rus");
	stream << "\nНазвание: " << ocean.oceanName << "\nШирота: " << ocean.latitude << "\nДолгота: " << ocean.longitude;
	stream << "\nМакс. глубина: " << ocean.max_depth << "м\nСоленость: " << ocean.salinity;
	stream << "%\nПлощадь: " << ocean.square << "км^2\nОбъем: " << ocean.volume << "км^3";

	return stream;
}
istream& operator>>(istream& stream, Ocean& ocean) {
	setlocale(LC_ALL, "rus");
	cout << "Введите название, координаты, максимальную глубину, соленость, площадь и объем: ";
	stream >> ocean.oceanName >> ocean.latitude >> ocean.longitude >> ocean.max_depth >> ocean.salinity;
	stream >> ocean.square >> ocean.volume;

	return stream;
}
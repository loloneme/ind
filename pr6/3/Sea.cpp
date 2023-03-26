#include "Sea.h"
#include <iostream>
#include <string>

using namespace std;


Sea::Sea() { latitude = longitude = max_depth = salinity = square = volume = 0; }


Sea::Sea(string n, double lat, double l, double depth, double salt, long long s, long long v):seaName(n), latitude(lat), longitude(l), max_depth(depth), salinity(salt), square(s), volume(v) {}


Sea::Sea(string n, string ocean, double lat, double l, double depth, double salt, long long s, long long v){
	seaName = n;
	this->oceanName = ocean;
	latitude = lat;
	longitude = l;
	max_depth = depth; 
	salinity = salt; 
	square = s;
	volume = v;
}

ostream& operator<<(ostream& stream, Sea& sea) {
	setlocale(LC_ALL, "rus");
	stream << "\nНазвание: " << sea.seaName;
	if (sea.oceanName != "") {
		stream << "\nОкеан: " << sea.oceanName;
	}
	else {
		stream << "\nЭто внутреннее море";
	}
	stream << "\nШирота: " << sea.latitude << "\nДолгота: " << sea.longitude;
	stream << "\nМакс. глубина: " << sea.max_depth << "м\nСоленость: " << sea.salinity;
	stream << "%\nПлощадь: " << sea.square << "км^2\nОбъем: " << sea.volume << "км^3";

	return stream;
}

istream& operator>>(istream& stream, Sea& sea) {
	setlocale(LC_ALL, "rus");
	int a;
	stream >> sea.seaName;
	cout << "\nМоре входит в океан? Введите 1, если да, иначе введите 0 ";
	cin >> a;
	if (a == 1) {
		cout << "\nВведите название океана: ";
		stream >> sea.oceanName;
	}
	stream >> sea.latitude >> sea.longitude >> sea.max_depth >> sea.salinity >> sea.square >> sea.volume;

	return stream;
}


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
	stream << "\n��������: " << sea.seaName;
	if (sea.oceanName != "") {
		stream << "\n�����: " << sea.oceanName;
	}
	else {
		stream << "\n��� ���������� ����";
	}
	stream << "\n������: " << sea.latitude << "\n�������: " << sea.longitude;
	stream << "\n����. �������: " << sea.max_depth << "�\n���������: " << sea.salinity;
	stream << "%\n�������: " << sea.square << "��^2\n�����: " << sea.volume << "��^3";

	return stream;
}

istream& operator>>(istream& stream, Sea& sea) {
	setlocale(LC_ALL, "rus");
	int a;
	stream >> sea.seaName;
	cout << "\n���� ������ � �����? ������� 1, ���� ��, ����� ������� 0 ";
	cin >> a;
	if (a == 1) {
		cout << "\n������� �������� ������: ";
		stream >> sea.oceanName;
	}
	stream >> sea.latitude >> sea.longitude >> sea.max_depth >> sea.salinity >> sea.square >> sea.volume;

	return stream;
}


#include "Ocean.h"
#include <iostream>
#include <string>

using namespace std;

Ocean::Ocean() { latitude = longitude = max_depth = salinity = square = volume = 0;  }

Ocean::Ocean(string n, double lat, double l, double depth, double salt, long long s, long long v) : oceanName(n), latitude(lat), longitude(l),
max_depth(depth), salinity(salt), square(s), volume(v) {}

ostream& operator<<(ostream& stream, Ocean& ocean) {
	setlocale(LC_ALL, "rus");
	stream << "\n��������: " << ocean.oceanName << "\n������: " << ocean.latitude << "\n�������: " << ocean.longitude;
	stream << "\n����. �������: " << ocean.max_depth << "�\n���������: " << ocean.salinity;
	stream << "%\n�������: " << ocean.square << "��^2\n�����: " << ocean.volume << "��^3";

	return stream;
}
istream& operator>>(istream& stream, Ocean& ocean) {
	setlocale(LC_ALL, "rus");
	cout << "������� ��������, ����������, ������������ �������, ���������, ������� � �����: ";
	stream >> ocean.oceanName >> ocean.latitude >> ocean.longitude >> ocean.max_depth >> ocean.salinity;
	stream >> ocean.square >> ocean.volume;

	return stream;
}
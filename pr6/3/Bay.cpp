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
	stream << "\n��������: " << bay.bayName;
	if (bay.oceanName != "") {
		stream << "\n�����: " << bay.oceanName;
	}
	else {
		stream << "\n�� �������� ������ ������";
	}
	if (bay.seaName != "") {
		stream << "\n����: " << bay.seaName;
	}
	else {
		stream << "\n�� �������� ������ ����";
	}
	stream << "\n������: " << bay.latitude << "\n�������: " << bay.longitude;
	stream << "\n����. �������: " << bay.max_depth << "�\n�������: " << bay.square << "��^2";

	return stream;
}

istream& operator>>(istream& stream, Bay& bay) {
	setlocale(LC_ALL, "rus");
	int a;
	stream >> bay.seaName;
	cout << "\n����� ������ � ����? ������� 1, ���� ��, ����� ������� 0 ";
	cin >> a;
	if (a == 1) {
		cout << "\n������� �������� ����: ";
		stream >> bay.seaName;
	}
	cout << "\n����� ������ � �����? ������� 1, ���� ��, ����� ������� 0 ";
	cin >> a;
	if (a == 1) {
		cout << "\n������� �������� ������: ";
		stream >> bay.oceanName;
	}
	stream >> bay.latitude >> bay.longitude >> bay.max_depth >> bay.square;

	return stream;
}

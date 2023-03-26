#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ocean
{
protected:
	string oceanName = "";

	double max_depth;
	double salinity;

	double latitude;
	double longitude;

	long long square;
	long long volume;

public:
	Ocean();
	Ocean(string n, double lat, double l, double depth, double salt, long long s, long long v);

	friend ostream& operator<<(ostream& stream, Ocean& ocean);
	friend istream& operator>>(istream& stream, Ocean& ocean);
};


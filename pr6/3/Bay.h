#pragma once
#include "Sea.h"
class Bay :
    public Sea
{
protected:
    string bayName = "";

    double max_depth;

    double latitude;
    double longitude;

    long long square;
public:
    Bay();
    Bay(string n, string sea, string ocean, double lat, double l, double depth, long long s);

    friend ostream& operator<<(ostream& stream, Bay& bay);
    friend istream& operator>>(istream& stream, Bay& bay);
};


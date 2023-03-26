#pragma once
#include "Ocean.h"
#include <iostream>
#include <string>

using namespace std;

class Sea :
    public Ocean
{
protected:
    string seaName = "";

    double max_depth;
    double salinity;

    double latitude;
    double longitude;

    long long square;
    long long volume;
public:
    Sea();
    Sea(string n, double lat, double l, double depth, double salt, long long s, long long v);
    Sea(string n, string ocean, double lat, double l, double depth, double salt, long long s, long long v);
    
    friend ostream& operator<<(ostream& stream, Sea& sea);
    friend istream& operator>>(istream& stream, Sea& sea);

};


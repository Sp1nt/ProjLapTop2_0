#pragma once
#include <string>
using namespace std;

class Monitor {
    string brandMon;
    double sizeMon;
public:
    Monitor(string brand, double size);

    string GetBrand() const;
    double GetSize() const;

};

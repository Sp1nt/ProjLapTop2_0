#pragma once
#include <string>
using namespace std;

class SSD {
    string modelSSD;
    int capacitySSD;
public:
    SSD(string model, int capacity);

    string GetModel() const;
    int GetCapacity() const;

};

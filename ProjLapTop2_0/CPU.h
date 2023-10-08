#pragma once
#include <string>
using namespace std;

class CPU {
    string modelCPU;
    int nCoresCPU;
public:
    CPU(string model, int cores);

    string GetModel() const;
    int GetCores() const;

};

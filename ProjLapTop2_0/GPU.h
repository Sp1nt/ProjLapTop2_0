#pragma once
#include <string>
using namespace std;

class GPU {
    string modelGPU;
    int memoryGPU;
public:
    GPU(string model, int memory);

    string GetModel() const;
    int GetMemory() const;

};

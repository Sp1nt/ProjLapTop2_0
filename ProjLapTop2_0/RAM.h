#pragma once
#include <string>
using namespace std;

class RAM {
    string typeRAM;
    int sizeRAM;
public:
    RAM(string type, int size);

    string GetType() const;
    int GetSize() const;

};

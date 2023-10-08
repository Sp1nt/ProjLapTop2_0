#pragma once
#include <string>
using namespace std;

class Keyboard {
    string typeKey;
public:
    Keyboard(string type);

    string GetType() const;
};

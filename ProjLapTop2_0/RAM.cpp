#include "RAM.h"

RAM::RAM(string type, int size) : typeRAM(type), sizeRAM(size) {}

string RAM::GetType() const {
    return typeRAM;
}

int RAM::GetSize() const {
    return sizeRAM;
}

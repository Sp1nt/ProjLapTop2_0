#include "Monitor.h"

Monitor::Monitor(string brand, double size) : brandMon(brand), sizeMon(size) {}

string Monitor::GetBrand() const {
    return brandMon;
}

double Monitor::GetSize() const {
    return sizeMon;
}

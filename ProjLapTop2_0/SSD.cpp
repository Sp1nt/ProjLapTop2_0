#include "SSD.h"

SSD::SSD(string model, int capacity) : modelSSD(model), capacitySSD(capacity) {}

string SSD::GetModel() const {
    return modelSSD;
}

int SSD::GetCapacity() const {
    return capacitySSD;
}

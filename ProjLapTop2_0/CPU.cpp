#include "CPU.h"

CPU::CPU(string model, int cores) : modelCPU(model), nCoresCPU(cores) {}

string CPU::GetModel() const {
    return modelCPU;
}

int CPU::GetCores() const {
    return nCoresCPU;
}

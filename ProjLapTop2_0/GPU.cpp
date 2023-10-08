#include "GPU.h"

GPU::GPU(string model, int memory) : modelGPU(model), memoryGPU(memory) {}

string GPU::GetModel() const {
    return modelGPU;
}

int GPU::GetMemory() const {
    return memoryGPU;
}

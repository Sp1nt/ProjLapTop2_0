#include "Laptop.h"
#include <iostream>

Laptop::Laptop(string model, string color, string modelCpu, int coresCpu, string modelGpu, int memoryGpu,
    string modelSsd, int capacitySsd, string typeRam, int sizeRam, string brandMon, double sizeMon, Mouse* mouse, Camera* camera)
    : modelLT(model), colorLT(color), cpuLT(modelCpu, coresCpu), gpuLT(modelGpu, memoryGpu),
    ssdLT(modelSsd, capacitySsd), ramLT(typeRam, sizeRam), displayLT(brandMon, sizeMon), mouseLT(mouse), cameraLT(camera) {}

void Laptop::Print() const {
    cout << "Model: " << modelLT << endl;
    cout << "Color: " << colorLT << endl;
    cout << "CPU: " << cpuLT.GetModel() << " : Cores: " << cpuLT.GetCores() << endl;
    cout << "GPU: " << gpuLT.GetModel() << " : Memory: " << gpuLT.GetMemory() << endl;
    cout << "SSD: " << ssdLT.GetModel() << " : Capacity: " << ssdLT.GetCapacity() << endl;
    cout << "RAM: " << ramLT.GetType() << " : Size: " << ramLT.GetSize() << endl;
    cout << "Monitor: " << displayLT.GetBrand() << " : Size: " << displayLT.GetSize() << endl;
    cout << "Mouse Brand: " << mouseLT->GetBrand() << endl;
    cout << "Camera Resolution: " << cameraLT->GetResolution() << endl;
}

#pragma once
#include <string>
#include "Monitor.h"
#include "Keyboard.h"
#include "CPU.h"
#include "GPU.h"
#include "SSD.h"
#include "RAM.h"
#include "Mouse.h"
#include "Camera.h"
using namespace std;

class Laptop {
    string modelLT;
    string colorLT;
    CPU cpuLT;
    GPU gpuLT;
    SSD ssdLT;
    RAM ramLT;
    Mouse* mouseLT;
    Camera* cameraLT;
    Monitor displayLT;

public:
    Laptop(string model, string color, string modelCpu, int coresCpu, string modelGpu, int memoryGpu,
        string modelSsd, int capacitySsd, string typeRam, int sizeRam, string brandMon, double sizeMon, Mouse* mouse, Camera* camera);

    void Print() const;

};

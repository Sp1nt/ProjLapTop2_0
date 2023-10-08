#pragma once
#include <string>
using namespace std;

class Camera {
    string resolutionCam;
public:
    Camera(string resolution);

    string GetResolution() const;
};

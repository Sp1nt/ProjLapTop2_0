#include "Camera.h"

Camera::Camera(string resolution) : resolutionCam(resolution) {}

string Camera::GetResolution() const {
    return resolutionCam;
}

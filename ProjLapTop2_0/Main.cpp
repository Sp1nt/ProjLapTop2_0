#include <iostream>
#include "Monitor.h"
#include "Keyboard.h"
#include "CPU.h"
#include "GPU.h"
#include "SSD.h"
#include "RAM.h"
#include "Mouse.h"
#include "Camera.h"
#include "Laptop.h"

int main() {
    Mouse mouse("Logitech");
    Camera camera("1080p");
    Laptop laptop("ASUS TUF Gaming F15 ", "Graphite Black", "Intel Core i5", 6, "Nvidia GeForce RTX 2050", 4, "SSD M.2", 512, "DDR4", 8,"ASUS",15.6, &mouse, &camera);

    laptop.Print();
    return 0;
}

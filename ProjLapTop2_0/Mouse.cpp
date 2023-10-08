#include "Mouse.h"

Mouse::Mouse(string brand) : brandMous(brand) {}

string Mouse::GetBrand() const {
    return brandMous;
}

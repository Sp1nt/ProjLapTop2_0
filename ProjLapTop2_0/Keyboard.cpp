#include "Keyboard.h"

Keyboard::Keyboard(string type) : typeKey(type) {}

string Keyboard::GetType() const {
    return typeKey;
}

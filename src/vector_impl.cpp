module vector;

#include <cmath>

float Vec2::length() const {
    return std::sqrt(x * x + y * y);
}


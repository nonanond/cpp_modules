import vector;
import crypto;

#include <iostream>

int main() {
    Vec2 v(3, 4);
    std::cout << "Length: " << v.length() << "\n";

    std::string h = simple_hash("hello");
    std::cout << "Hash: " << h << "\n";
}


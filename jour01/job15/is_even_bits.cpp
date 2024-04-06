#include <iostream>

bool isEvenBits(unsigned int n) {
    bool parity = 0;
    while (n) {
        parity = !parity;
        n = n & (n - 1);
    }
    return parity;
}

int main() {
    unsigned int n = 42;
    std::cout << "The number of 1 bits in " << n << " is " << (isEvenBits(n) ? "even" : "odd") << std::endl;

    return 0;
}
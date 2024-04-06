#include <iostream>

int main() {
    int n, m, temp;

    std::cout << "Enter the first integer: ";
    std::cin >> n;

    std::cout << "Enter the second integer: ";
    std::cin >> m;

    std::cout << "Before swap: n = " << n << ", m = " << m << std::endl;

    // Swap the numbers
    temp = n;
    n = m;
    m = temp;

    std::cout << "After swap: n = " << n << ", m = " << m << std::endl;

    return 0;
}
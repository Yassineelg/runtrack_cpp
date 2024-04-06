#include <iostream>

int main() {
    int sum = 0, num;

    for (int i = 0; i < 5; i++) {
        std::cout << "Enter an integer: ";
        std::cin >> num;
        sum += num;
    }

    std::cout << "The average is " << static_cast<double>(sum) / 5 << std::endl;

    return 0;
}
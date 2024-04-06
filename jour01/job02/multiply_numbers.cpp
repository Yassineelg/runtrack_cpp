#include <iostream>

int main() {
    double num1, num2, product;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    product = num1 * num2;

    std::cout << "The product of " << num1 << " and " << num2 << " is " << product << std::endl;

    return 0;
}
#include <iostream>

int main() {
    int num, reversed_num = 0;

    std::cout << "Enter a number: ";
    std::cin >> num;

    while (num != 0) {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }

    std::cout << "The reversed number is: " << reversed_num << std::endl;

    return 0;
}
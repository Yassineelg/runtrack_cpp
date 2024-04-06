#include <iostream>

int main() {
    int N;
    long long sum = 0;

    std::cout << "Enter an integer N: ";
    std::cin >> N;

    for (int i = 5; i <= N; i++) {
        long long cube = static_cast<long long>(i) * i * i;
        sum += cube;
    }

    std::cout << "The sum of cubes from 5^3 to " << N << "^3 is: " << sum << std::endl;

    return 0;
}
#include <iostream>
#include <string>

void MySortString(std::string *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                std::swap(*(arr + i), *(arr + j));
            }
        }
    }
}

int main() {
    std::string arr[] = {"Hello", "World", "AI", "Programming", "Assistant"};
    int n = sizeof(arr) / sizeof(arr[0]);

    MySortString(arr, n);

    std::cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>

int findMin(int** array, int size) {
    int* ptr = *array;
    int min = *ptr;

    for (int i = 0; i < size; i++) {
        if (*(*(array + i)) < min) {
            min = *(*(array + i));
        }
    }

    return min;
}

int main() {
    int a = 10, b = 20, c = 30, d = 5, e = 15;
    int* array[] = {&a, &b, &c, &d, &e};
    int size = sizeof(array) / sizeof(array[0]);

    int min = findMin(array, size);

    std::cout << "The smallest element in the array is: " << min << std::endl;

    return 0;
}
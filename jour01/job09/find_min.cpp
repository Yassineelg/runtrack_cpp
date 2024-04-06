#include <iostream>

int findMin(int* array, int size) {
    int* ptr = array;
    int min = *ptr;

    for (int i = 0; i < size; i++) {
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }

    return min;
}

int main() {
    int array[] = {10, 20, 30, 5, 15};
    int size = sizeof(array) / sizeof(array[0]);

    int min = findMin(array, size);

    std::cout << "The smallest element in the array is: " << min << std::endl;

    return 0;
}
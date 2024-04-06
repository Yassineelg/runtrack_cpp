#include <iostream>

void addElement(int *&array, int &size, int newValue) {
    int *newArray = new int[size + 1];

    for (int i = 0; i < size; i++) {
        newArray[i] = array[i];
    }

    newArray[size] = newValue;
    size++;

    delete[] array;
    array = newArray;
}

void showTable(int *array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size = 0;
    int *array = new int[5];

    addElement(array, size, 10);
    addElement(array, size, 20);
    addElement(array, size, 30);
    addElement(array, size, 40);

    showTable(array, size);

    delete[] array;
    return 0;
}
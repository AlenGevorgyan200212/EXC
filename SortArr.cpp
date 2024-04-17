#include <iostream>

void SortArr(double arr[], int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = i + 1; j < length; ++j) {
            if (arr[i] > arr[j]) {
                double a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}

int main() {
    int length = 0;
    std::cout << "Enter the size of array: ";
    std::cin >> length;

    double arr[length] = {};

    std::cout << "\nEnter the elements: ";
    for (int i = 0; i < length; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "\nArray before sorting: ";
    for (int i = 0; i < length; ++i) {
        std::cout << arr[i] << " ";
    }

    SortArr(arr, length);

    std::cout << "\nSorted array: ";
    for (int i = 0; i < length; ++i) {
    std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;

}

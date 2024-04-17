#include <iostream>

void findPairsBySum(int arr[], int length, int sum) {
    int num1 = 0;
    int num2 = 0;

    for (int i = 0; i < length - 1; ++i) {
        num1 = arr[i];
        for (int j = i + 1; j < length; ++j) {
            num2 = arr[j];
            if (num1 + num2 == sum) {
                std::cout << num1 << " + " << num2 << " = " << sum << std::endl;
                return;
            }
        }
    }

    std::cout << "Try another number." << std::endl;
}

int main() {
    int length = 0;
    std::cout << "Input array length: ";
    std::cin >> length;    

    int arr[length] = {};
    std::cout << "\nInput array elements: " << std::endl;
    for (int i = 0; i < length; ++i) {
        std::cin >> arr[i];
    }

    int num = 0;
    std::cout << "Input sum of two elements: ";
    std::cin >> num;

    findPairsBySum(arr, length, num);

    return 0;
}



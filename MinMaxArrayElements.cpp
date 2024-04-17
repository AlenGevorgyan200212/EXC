#include <iostream>

#define MIN(a, b) (a < b ? a : b)
#define MAX(a, b) (a > b ? a : b)

int MinValOfArr(int arr[], unsigned int length) {
    int minVal = arr[0];
    
    for (unsigned int i = 1; i < length; ++i) {
        minVal = MIN(minVal, arr[i]);
    }

    return minVal;
}

int MaxValOfArr(int arr[], unsigned int length) {
    int maxVal = arr[0];

    for (unsigned int i = 1; i < length; ++i) {
        maxVal = MAX(maxVal, arr[i]);
    }

    return maxVal;
}

int main() {
    unsigned int length;
    std::cout << "Enter the array length: ";
    std::cin >> length;

    if (length <= 0) {
        std::cout << "Length should be positive." << std::endl;
        return 1;
    }

    int arr[length] = {};
    
    std::cout << "Enter " << length << " integer numbers for array:" << std::endl;
    for (unsigned int i = 0; i < length; ++i) {
        std::cin >> arr[i];
    } 

    int minVal = MinValOfArr(arr, length);
    int maxVal = MaxValOfArr(arr, length);

    std::cout << "Element with minimum value in the array is: " << minVal << std::endl;
    std::cout << "Element with maximum value in the array is: " << maxVal << std::endl;

    return 0;
}

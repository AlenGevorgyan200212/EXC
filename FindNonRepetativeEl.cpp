#include <iostream>

void FindNonRepeating(int arr[100][100], int rows, int cols) {
    const int maxValue = 100000;
    
    int repeating[maxValue + 1] = {0};

    int value = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            value = arr[i][j];
            repeating[value]++;
        }
    }

    bool nonRep = false;

    std::cout << "Non-repeating elements are: ";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            value = arr[i][j];
            if (repeating[value] == 1) {
                nonRep = true;
                std::cout << value << " ";
            }
        }
    }

    if (!nonRep) {
        std::cout << "There are no non-repeating elements in matrix.";
    }

    std::cout << std::endl; 
}

int main() {
    int rows = 0;
    std::cout << "Enter number of rows between 1 to 100: ";
    std::cin >> rows;
    if (rows <=0 || rows > 100) {
        std::cout << "Invalid number.";
        return 1;
    }

    int cols = 0;
    std::cout << std::endl << "Enter number of columns: ";
    std::cin >> cols;
    if (cols <=0 || cols > 100) {
        std::cout << "Invalid number.";
        return 1;
    }


    int arr[100][100];
    std::cout << std::endl << "Enter elements of the matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element " << i + 1 << ", " << j + 1 << " : ";
            std::cin >> arr[i][j];
        }
    }

    FindNonRepeating(arr, rows, cols);
    return 0;
}

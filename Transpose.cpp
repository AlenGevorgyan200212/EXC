#include <iostream>

void Transpose(int matrix[][100], int rowsAndCols) {
    int n = 0;
    for (int i = 0; i < rowsAndCols; ++i) {
        for (int j = i + 1; j < rowsAndCols; ++j) {
            n = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = n;
        }
    }
}

void Print(int matrix[][100], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int size = 0;
    std::cout << "Enter the size of your square matrix between 1 to 100: ";
    std::cin >> size;
    if (size <= 0 || size >100) {
        std::cout << "Invalid number.";
        return 1;
    }

    int arr[100][100];

    std::cout << std::endl << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << "Enter element " << i + 1 << ", " << j + 1 << " : ";
            std::cin >> arr[i][j];
        }
    }

    std::cout << "Original matrix:" <<std::endl;
    Print(arr, size);

    Transpose(arr, size);

    std::cout << "\nTransposed matrix:" << std::endl;
    Print(arr, size);

    return 0;
}

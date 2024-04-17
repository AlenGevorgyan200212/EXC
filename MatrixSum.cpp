#include <iostream>

void MatrixSum(int rows, int cols, int arr1[100][100], int arr2[100][100], int sum[100][100]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void PrintMatrix(int rows, int cols, int matrix[100][100]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows = 0;
    int cols = 0;
    int arr1[100][100];
    int arr2[100][100];
    int sum[100][100];

    std::cout << "Enter number of rows between 1 to 100: ";
    std::cin >> rows;
    if (rows <= 0 || rows > 100) {
        std::cout << "Invalid number.";
        return 1;
    }

    std::cout << "Enter number of columns between 1 to 100: ";
    std::cin >> cols;
    if (cols <= 0 || cols > 100) {
        std::cout << "Invalid number.";
        return 1;
    }

    std::cout << std::endl << "Enter elements of the 1st matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element " << i + 1 << ", " << j + 1 << " : ";
            std::cin >> arr1[i][j];
        }
    }

    std::cout << std::endl << "Enter elements of the 2nd matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element " << i + 1 << ", " << j + 1 << " : ";
            std::cin >> arr2[i][j];
        }
    }
    

    MatrixSum(rows, cols, arr1, arr2, sum);

    PrintMatrix(rows, cols, arr1);
    std::cout << " + " << std::endl;
    PrintMatrix(rows, cols, arr2);
    std::cout << " = " << std::endl;
    PrintMatrix(rows, cols, sum);
    

    return 0;
}

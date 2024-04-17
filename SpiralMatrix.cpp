#include <iostream>

void SpiralMatrix(int arr[100][100], int rows, int cols) {
    int top = 0;
    int bot = rows - 1;
    int left = 0;
    int right = cols - 1;

    while (top <= bot && left <= right) {
        for (int i = left; i <= right; ++i) {
            std::cout << arr[top][i] << " ";
        }
        top++;

        for (int i = top; i <= bot; ++i) {
            std::cout << arr[i][right] << " ";
        }
        right--;

        if (top <= bot) {
            for (int i = right; i >= left; --i) {
                std::cout << arr[bot][i] << " ";
            }
            bot--;
        }

        if(left <= right) {
            for (int i = bot; i >= top; --i) {
                std::cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    int rows = 0;
    int cols = 0;

    std::cout << "Enter number of rows between 0 to 100: ";
    std::cin >> rows;
    std::cout << "\nEnter number of columns between 0 to 100: ";
    std::cin >> cols;

    if (rows <= 0 || cols <=0 || rows > 100 || cols > 100) {
        std::cout << "\nInvalid number." << std::endl;
        return 1;
    }

    int matrix[100][100];

    std::cout << "\nEnter matrix elements:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element " << i + 1 << ", " << j + 1 << " : ";
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "\nOriginal matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nMatrix in spiral order:" << std::endl;
    SpiralMatrix(matrix, rows, cols);
    std::cout << std::endl;

    return 0;
}

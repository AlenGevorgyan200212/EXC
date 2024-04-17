#include <iostream>

void RightTriangle(int n, char symbol) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << symbol;
        }

        std::cout << std::endl;
    }
}

void LeftTriangle(int n, char symbol) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            std::cout << " ";
        }

        for (int k = 0; k < i; ++k) {
            std::cout << symbol;
        }

        std::cout << std::endl;
    }
}

void EquilateralTriangle(int n, char symbol) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) {
        std::cout << " ";
        }

        for (int k = 0; k < 2 * i - 1; ++k) {
            std::cout << symbol;
        }

        std::cout << std::endl;
    }
}

int main() {
    int n = 0;
    char symbol = '0';

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "Enter the symbol you want to use: ";
    std::cin >> symbol;

    RightTriangle(n, symbol);
    std::cout << std::endl;
    
    LeftTriangle(n, symbol);
    std::cout << std::endl;

    EquilateralTriangle(n, symbol);

    return 0;
}

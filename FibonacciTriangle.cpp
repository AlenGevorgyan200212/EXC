#include <iostream>

void FibTr(int n) {
    std::cout << "Here is your Fibonacci Triangle: \n" << std::endl;

    int a = 1;
    int b = 1;
    int c = 1;

    for (int i = 1; i <= n; ++i) {
        a = 1;
        b = 1;

        for (int j = 1; j <= i; ++j) {
            std::cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }

        std::cout << std::endl; 
    }
}

int main() {
    int n = 0;

    std::cout << "Enter the term of the Fibonacci sequence: ";
    std::cin >> n;
    std::cout << std::endl;

    FibTr(n);

    return 0;
}

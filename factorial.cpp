#include <iostream>

long factorial(int num) {
    long result = 1;
    
    for (int i = 2; i <= num; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    int num = 0;

    std::cout << "Enter a Number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Number should be positive.";
    } else {
        long fact = factorial(num);
        std::cout << "Factorial of " << num << " is " << fact << std::endl;
    }

    return 0;
}

#include <iostream>

int reverseNumber(int num) {
    int reversedNum = 0;
    int digit = 0;

    while(num != 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    int num = 0;

    std::cout << "Enter a number: ";
    std::cin >> num;

    int reversedNumber = reverseNumber(num);
    std::cout << "Reversed number: " << reversedNumber << std::endl;

    return 0;
}

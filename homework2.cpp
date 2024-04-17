#include <iostream>

bool isOdd(int num) {
	return num % 2 != 0;
}

int main() {
	int num = 0;
	std::cout << "Enter a number: ";
	std::cin >> num;

	if (isOdd(num)) {
		std::cout << num << " is odd. " << std::endl;
	} else {
		std::cout << num << " is even. " << std::endl;
	}

	return 0;
}

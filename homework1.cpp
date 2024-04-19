#include <iostream>
//change for commit
int f();
int main() {
	int numCount = 0;

	std::cout << "Enter the amout of numbers: ";
	std::cin >> numCount;

	if (numCount <= 0) {
		std::cout << "Invalid input." << std::endl;
		return 1;
	
	}

	double largestNumber;
	double number;

	std::cout << "Enter number 1: ";
	std::cin >> largestNumber;

	for (int i = 2; i <= numCount; ++i) {
		std::cout << "Enter number " << i << ": ";
		std::cin >> number;

		if(number > largestNumber) {
			largestNumber = number;
		
		}
	}

	std::cout << "Largest number is: " << largestNumber << std::endl;

	return 0;
}

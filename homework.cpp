#include <iostream>

int main(){
    char op;
    float num1, num2;
    
    std::cout << "Enter operator: +, -, * or /: "
    std::cin >> op;
    
    std::cout << "Enter operands: ";
    std::cout >> num1 >> num2;
    
    switch(op) {
    
    case '+':
    	std::cout << num1 << " + " << num2 << " = " << num1 + num2;
    	break;
    	
    case '-':
    	std::cout << num1 << " - " << num2 << " = " << num1 - num2;
    	break;
    	
    case '*':
    	std::cout << num1 << " * " << num2 << " = " << num1 * num2;
    	break;
    	
    case '/':
    	if (num2 != 0)
    	    std::cout << num1 << " / " << num2 << " = " << num1 / num2;
    	else
    	    std::cout << "Can't be divided by zero";
    	break;
    	
    default:
    	std::cout << "Choose correct operator";
    	break;
    }
    
    return 0
}

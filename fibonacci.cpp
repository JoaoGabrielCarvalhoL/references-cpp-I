#include <iostream>

int fibonacci(int number) {
	return (number == 1) ? 1 : fibonacci(number - 1) + fibonacci (number - 2);
}

int main(int argc, char const *argv[])
{
	int number {}; 
	int result {}; 

	std::cout << "Enter a number: "; 
	std::cin >> number;

	result = fibonacci(number);
	std::cout << "Fibonacci\n" << number <<": " << result << std::endl;
	return 0;
}
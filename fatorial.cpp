#include <iostream>

int fatorial(int number) {
	return (number <= 1) ?1 : number * fatorial(number -1);
}

int main(int argc, char const *argv[])
{
	int number {};
	int result {};
	std::cout << "Enter a number: "; 
	std::cin >> number;

	result = fatorial(number); 
	std::cout << number << ": " << result <<std::endl;
	return 0;
}
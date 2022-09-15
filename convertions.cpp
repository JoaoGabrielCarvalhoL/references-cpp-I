#include <iostream>

int main(int argc, char const *argv[])
{
	double number = 9.87; 
	int convertedToInteger = static_cast<int>(number);

	std::cout << "Number: " << number << std::endl;
	std::cout << "Number to integer: " << convertedToInteger << std::endl;

	double convertedToDouble = static_cast<double>(convertedToInteger); 
	std::cout << "Value integer to double: " << convertedToDouble << std::endl;

	return 0;
}
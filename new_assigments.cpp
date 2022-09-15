#include <iostream>

int main(int argc, char const *argv[])
{
	int number {10}; 
	int secondNumber(10);
	int thirdNumber = {10};

	std::cout << number << std::endl;
	std::cout << secondNumber << std::endl;
	std::cout << thirdNumber << std::endl;
	return 0;
}


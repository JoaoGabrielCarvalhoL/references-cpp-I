#include <iostream>

int main(int argc, char const *argv[])
{
	int number {20}; 
	int* pNumber = &number;

	std::cout << "Number: " << number << std::endl;
	std::cout << "pNumber: " << pNumber << std::endl;
	std::cout << "Content of pNumber: " << *pNumber << std::endl;
	return 0;
}
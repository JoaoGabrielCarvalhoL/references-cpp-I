#include<iostream>

int main(int argc, char const *argv[])
{
	std::string* pointer = nullptr;
	pointer = new std::string[8];
	std::getline(std::cin, (*pointer));
	std::cout << "Text: \e[33;1m" << *pointer << "\e[m" << std::endl;
	delete[] pointer;
	pointer = NULL;  

	return 0;
}
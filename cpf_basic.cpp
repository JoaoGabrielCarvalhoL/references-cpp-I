#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
	
	std::string cpf = "123.456.789-01";
	std::cout << "Before remove mask: " << cpf << std::endl;

	cpf.erase(std::remove(cpf.begin(), cpf.end(), '.'), cpf.end());
	cpf.erase(std::remove(cpf.begin(), cpf.end(), '-'), cpf.end());

	std::cout << "After remove mask: " << cpf << std::endl;
	return 0;
}
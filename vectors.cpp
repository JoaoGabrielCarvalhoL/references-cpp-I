#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	std::vector<std::string> vet = {"Shell", "C++", "Perl", "Java"};
	std::vector<std::string>::iterator first = vet.begin();

	std::cout << "First Element: " << *first << std::endl;
	vet.pop_back();
	std::vector<std::string>::iterator last = vet.end();
	std::cout << "Last Element: " << *last << std::endl;
}
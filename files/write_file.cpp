#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	
	std::string contentData{};
	std::ofstream file;

	file.open("file2.txt", std::ios_base::app);

	std::cout << "Say something: ";
	std::getline(std::cin, contentData);

	file << contentData << std::endl;	
	file.close();

	return 0;
}
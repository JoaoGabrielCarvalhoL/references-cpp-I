#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[])
{
	std::string user = getenv("USER"); 
	std::cout << "USER: " << user << std::endl;
	std::cout << std::endl;

	//OR 
	std::cout << "Version Java: " << std::endl;
	system("java --version");
	std::cout << std::endl;

	std::cout << "Version Maven: " << std::endl; 
	system("mvn --version"); 
	std::cout << std::endl;

	std::cout << "System: " << std::endl; 
	system("uname -a"); 
	std::cout << std::endl;


	return 0;	

}
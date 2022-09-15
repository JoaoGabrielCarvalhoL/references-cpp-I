#include <iostream>

int main(int argc, char const *argv[])
{
	for (int i = 0; i < 10; i++) {

		if (i == 0 || i == 9) {
			std::cout << "+";	
			
			for (int k = 0; k < 20; k++) {
				if (k == 19) {
					std::cout << "+";
				} else {
					std::cout << "-";	
				}
			}
			std::cout << std::endl;	

		} else {
			std::cout << "|";
			for (int j = 0; j < 20; j++) {
				if (j == 19) {
					std::cout << "|"; 
				} else {
					std::cout << " ";
				}
			}	
			std::cout << std::endl;
		}
	}
	
}
#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	std::string line{};
	std::ifstream file("file.txt"); 
	bool numberLines{false};
	std::string param{};
	int countLines {1};

	if (argc > 1) {
		param = argv[1]; 
		if (param == "--lines" || "-l") {
			numberLines = true;
		}
	}

	if (file.is_open()) {
		while(getline(file, line)) {

			if(numberLines) {
				std::cout << countLines << " \u2502" << line << std::endl;
				countLines++;	
			} else {
				std:: cout << line << std::endl;
			}	
		}

		file.close();

	} else {
		std::cout << "The file cannot be opened." << std::endl;
	}

	return 0;
	
}
#include <iostream>

int main(int argc, char const *argv[])
{
	/*
	char letter; 
	std::cout << "Enter a letter: "; 
	std::cin >> letter;
	std::cout << letter << std::endl;
	
	char word[50]; 
	std::cout << "Enter a word: "; 
	std::cin >> word;
	std::cout << word << std::endl;
*/
	char anotherWord[50]; 
	std::cout << "Enter a another word: "; 
	std::cin.getline(anotherWord, 50); 
	std::cout << anotherWord << std::endl;

	std::string text; 
	std::cout << "Enter a text: "; 
	std::getline(std::cin, text); 
	std::cout << text << std::endl;

	return 0;
}


#include <iostream>
#include <string>

int main()

{
	setlocale(LC_ALL, "RU");

	std::string text;
	std::cout << "Введите число: " << std::endl;
	std::getline(std::cin, text);
	std::cout << "Ваше число: " << std::endl << text << std::endl;

	return 0;
}



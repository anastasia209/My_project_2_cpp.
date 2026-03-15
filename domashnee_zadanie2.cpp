

#include <iostream>
#include <string>
#include <Windows.h>


int main()

{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int nomer;
	std::cout << "Введите слово : " << std::endl;
	std::cin >> nomer;
	std::cout << "Вы ввели : " << std::endl << nomer << std::endl;

	return 0;
}



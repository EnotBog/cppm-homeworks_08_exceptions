#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <exception>
#include <string>

int function(std::string buf, int error_size_string)
{
	if (buf.length() == error_size_string) { throw std::exception("Вы ввели слово запретной длины! До свидания"); }
	return buf.length();
}

int main(int argc, char** argv)
{
	//SetConsoleOutputCP(65001);
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	int error_size_string = 0;
	std::string buf;




	std::cout << "Введите запретную длину: ";
	std::cin >> error_size_string;


	while (true)
	{
		try
		{
			std::cout << "Введите слово: ";
			std::cin >> buf;

			std::cout << "Длина слова" << buf << "равна" << function(buf, error_size_string);
		}
		catch (const std::exception& err)
		{
			std::cout << err.what() << std::endl; break;
		}
		
	}

	return 0;
}

//
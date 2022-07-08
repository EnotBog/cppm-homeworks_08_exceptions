#include <cstdio>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <windows.h>
#include <locale.h>
#include <fstream>
#include "Header.h"





void print_info(Figure* q)
{
	q->print_info();
}






int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	try
	{
	Triangle triagle = {10,20,30,50,60,70 };
	Triangle triagle2 = { 10,20,30,50,60,190 };

	Quadrangle quadrangle2 = { 10,20,30,40,90,90,90,90 };// четырех угольник
	Quadrangle quadrangle = { 10,20,30,40,90,90,00,90 };

	}
	catch (const MyException & ex)
	{
		std::cout << ex.what() << "\n";
	}




	return 0;
}

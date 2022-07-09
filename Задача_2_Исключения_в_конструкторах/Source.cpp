#include <cstdio>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <windows.h>
#include <locale.h>
#include <fstream>
#include "Header.h"





std::string print_info_2(Figure* q)
{
	return q->print_info_2();
}






int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	try
	{

	Figure figure;
	Figure* p_figure = &figure;
	std::cout << print_info_2(p_figure);

	Triangle triangle = {10,20,30,50,60,70 };
	Figure* p_triangle = &triangle;
	std::cout << print_info_2(p_triangle);

	Triangle triangle2 = { 10,20,30,50,60,190 };
	Figure* p_triangle2 = &triangle2;
	std::cout << print_info_2(p_triangle2);

		
	Quadrangle quadrangle2 = { 10,20,30,40,90,90,90,90 };// четырех угольник
	Figure* p_quadrangle2 = &quadrangle2;
	std::cout << print_info_2(p_quadrangle2);

	Quadrangle quadrangle = { 10,20,30,40,90,90,00,90 };
	Figure* p_quadrangle = &quadrangle;
	std::cout << print_info_2(p_quadrangle);

	}
	catch (const MyException & ex)
	{
		std::cout << ex.what() << "\n";
	}




	return 0;
}

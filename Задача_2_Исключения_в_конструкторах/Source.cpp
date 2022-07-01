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

	//Figure f = {};
	//Triangle triagle = {10,20,30,50,60,70 };
	//Rectangular_triangle r_triagle = { 10,20,30,50,60 };
	//Isosceles_triangle i_triagle = { 10,20,10,60 };
	//Equilateral_triangle e_triagle = { 10 };

	Quadrangle quadrangle = { 10,20,30,40,90,90,90,90 }; // четырех угольник
	//My_Rectangle rectangle = { 10,20 };//прямоугольник
	//Square square = { 20 }; // квадрат
	//Parallelogram parallelogram = { 20,30,30,40 }; //параллелограмм
	//Rhomb rhomb = { 30,30,40 }; // ромб


	//Figure* p_triagle = &triagle;
	//Figure* p_equilateral_triangle = &e_triagle;
	//Figure* p_isosceles_triangle = &i_triagle;
	//Figure* p_rectangular_triangle = &r_triagle;

	//Figure* p_rectangle = &rectangle;
//	Figure* p_quadrangle = &quadrangle;
	//Figure* p_square = &square;
	//Figure* p_parallelogram = &parallelogram;
	//Figure* p_rhomb = &rhomb;


	//print_info(p_rectangular_triangle);
	//print_info(p_isosceles_triangle);
	//print_info(p_equilateral_triangle);

//	print_info(p_quadrangle);
	//print_info(p_rectangle);
	//print_info(p_square);
	//print_info(p_parallelogram);
	//print_info(p_rhomb);



	return 0;
}
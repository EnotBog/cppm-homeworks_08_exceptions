#pragma once
#include "Head_includeclass.h"
#include "Figure.h"

class Triangle : public Figure //треугольник скц
{
public:
	Triangle();
	Triangle(int a, int b, int c, int A, int B, int C);
protected:
	std::string get_sides();
	std::string get_corn();
	void print_info() override;


	int a = 0, b = 0, c = 0;
	int A = 0, B = 0, C = 0;

	
};
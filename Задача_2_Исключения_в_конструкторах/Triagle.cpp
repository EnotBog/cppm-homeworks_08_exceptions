﻿#include "Triagle.h"
#include "MyException.h"


	Triangle::Triangle() { sides_count = 3; }
	Triangle::Triangle(int a, int b, int c, int A, int B, int C)
	{	
			if (A+B+C!=180)
			{
				std::string ex_error = "Треугольник: (стороны " + std::to_string(a) + ", " + std::to_string(b) + ", " + std::to_string(c) + "; углы " +
					std::to_string(A) + ", " + std::to_string(B) + ", " + std::to_string(C) + ")" +
					" не был создан. Причина: сумма углов не равна 180 градусам " + "\n";
				throw MyException(ex_error);
			
			}
			else 
			{
				this->a = a; this->b = b; this->c = c;
				this->A = A; this->B = B; this->C = C;
				this->name = "Треугольник:";
				this->sides_count = 3;
			}
	}
	

		
	

	std::string Triangle::get_sides()
	{
		std::string buf = { "Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + "\n" };
		return buf;
	}
	std::string Triangle::get_corn()
	{
		std::string buf = { "Углы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + "\n" };
		return buf;
	}

	std::string Triangle::print_info_2()
	{
		std::string q;
		return q = name + " (стороны " + std::to_string(a) + ", " + std::to_string(b) + ", " + std::to_string(c) + "; углы " +
			std::to_string(A) + ", " + std::to_string(B) + ", " + std::to_string(C) +  ")" + " создан " + "\n";
	}


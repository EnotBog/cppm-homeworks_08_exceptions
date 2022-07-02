#include "Triagle.h"
#include "MyExceptionTriagle.h"


	Triangle::Triangle() { sides_count = 3; }
	Triangle::Triangle(int a, int b, int c, int A, int B, int C)
	{
		try
		{
			if (A+B+C!=180)
			{
				throw MyExceptionTriagle(a, b, c, A, B, C, "Треугольник:", "сумма углов не равна 180 градусам");
			}
			else {
				this->a = a; this->b = b; this->c = c;
				this->A = A; this->B = B; this->C = C;
				this->name = "Треугольник:";
				this->sides_count = 3;
				std::cout << name << " (стороны " << a << ", " << b << ", " << c  << "; углы " << A << ", " << B << ", " << C  << ")" << " создан " << "\n";
			}
		}
		catch (const MyExceptionTriagle &e)
		{
			std::cout << e.what() << "\n";
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

	void Triangle::print_info() 
	{
		std::cout << Triangle::get_name() << "\n" << Triangle::get_sides() << Triangle::get_corn() << "" << " " << " " << "\n"; // 
	}


	int a = 0, b = 0, c = 0;
	int A = 0, B = 0, C = 0;



#include "Quadrangle.h"
#include "MyException.h"


Quadrangle ::Quadrangle() { };

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
	{
	try
	{if ((A + B + C + D) != 360) { throw MyException("Четырехугольник:"); 
	} else {

		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		this->name = "Четырехугольник:";
		this->sides_count = 4;
		std::cout <<name << " (стороны " << a << ", " << b << ", " << c << ", " << d << ", " << "; углы " << A << ", " << B << ", " << C << ", " << D << ", " << ")"<<" создан "<<"\n";
	}
		
	}
	catch (const MyException& e)
	{
		std::cout << e.ex_name << " (стороны " << a<<", " << b << ", " << c << ", " << d << ", " << "; углы " << A << ", " << B << ", " << C << ", " << D << ", " << ")"<<" не был создан. Причина: сумма углов не равна 360 " << "\n";
	}
	}


	std::string Quadrangle::get_sides()
	{
		std::string buf = { "Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d) + "\n" };
		return buf;
	}
	std::string Quadrangle::get_corn()
	{
		std::string buf = { "Углы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D) + "\n" };
		return buf;
	}
	void Quadrangle::print_info() 
	{
		std::cout << Quadrangle::get_name() << "\n" << Quadrangle::get_sides() << Quadrangle::get_corn() << "" << "\n"; // 
	}

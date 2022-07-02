#include "MyExceptionTriagle.h"

MyExceptionTriagle::MyExceptionTriagle()
{};

MyExceptionTriagle::MyExceptionTriagle(int& a, int& b, int& c,  int& A, int& B, int& C, const std::string& name, const std::string& error) : ex_a(a), ex_b(b), ex_c(c),  ex_A(A), ex_B(B), ex_C(C),  ex_name(name)
{
	ex_error = { ex_name + " (стороны " + std::to_string(ex_a) + ", " + std::to_string(ex_b) + ", " + std::to_string(ex_c) +  
				  "; углы " + std::to_string(ex_A) + ", " + std::to_string(ex_B) + ", " + std::to_string(ex_C)   + ")" + error };

}

char const* MyExceptionTriagle::what() const
{
	return   ex_error.c_str();
}

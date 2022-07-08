#include "MyExceptionQuadrangle.h"

MyExceptionQuadrangle::MyExceptionQuadrangle() {};
MyExceptionQuadrangle::MyExceptionQuadrangle(char const* const message) :std::exception(message) {};


MyExceptionQuadrangle::MyExceptionQuadrangle(int& a, int& b, int& c, int& d, int& A, int& B, int& C, int& D, const std::string& name, const std::string& error) : ex_a(a), ex_b(b), ex_c(c), ex_d(d), ex_A(A), ex_B(B), ex_C(C), ex_D(D), ex_name(name)
{
	ex_error = { ex_name + " (стороны " + std::to_string(ex_a) + ", " + std::to_string(ex_b) + ", " + std::to_string(ex_c) + ", " + std::to_string(ex_d) + 
				  "; углы " + std::to_string(ex_A) + ", " + std::to_string(ex_B) + ", " + std::to_string(ex_C) + ", " + std::to_string(ex_D)  + ")" + error };
	MyExceptionQuadrangle(message);
}

				 


	 char const* MyExceptionQuadrangle::what() const
	 {
		 return   ex_error.c_str();
	 }


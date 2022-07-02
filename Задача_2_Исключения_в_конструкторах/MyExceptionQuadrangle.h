#pragma once
#include <exception>
#include "Head_includeclass.h"
class MyExceptionQuadrangle : public std::exception
{
public:
	MyExceptionQuadrangle();
	MyExceptionQuadrangle(int& a, int& b, int& c, int& d, int& A, int& B, int& C, int& D, const std::string& name, const std::string& error);

	

	char const* what() const override;
	

private:

	std::string ex_error;
	std::string ex_name;
	int ex_a, ex_b, ex_c, ex_d, ex_A, ex_B, ex_C, ex_D;

};

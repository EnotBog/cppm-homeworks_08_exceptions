#pragma once
#include <exception>
#include "Head_includeclass.h"

class MyExceptionTriagle:public std::exception
{
public:
	MyExceptionTriagle();

	char const* what() const override;
	 MyExceptionTriagle(int& a, int& b, int& c, int& A, int& B, int& C, const std::string& name, const std::string& error);


private:
	std::string ex_error;
	std::string ex_name;
	int ex_a, ex_b, ex_c, ex_A, ex_B, ex_C;


};


#pragma once

#include <exception>
#include "Head_includeclass.h"


 class MyException :public std::exception
 {
 public:
	
	 MyException(char const* const message);

	 MyException();
	 ~MyException();

	 std::string ex_error;

 };

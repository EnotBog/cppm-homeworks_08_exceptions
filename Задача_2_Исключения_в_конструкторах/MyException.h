#pragma once
#include <string>
#include <exception>


 class MyException :public std::exception
 {
 public:
	
	 MyException(char const* const message);

	 MyException();
	 ~MyException();

	 std::string ex_error;

 };

#pragma once
#include <string>
#include <stdexcept>



 class MyException :public std::runtime_error
 {
 public:
	
	 MyException(std::string& message);

	 

	 std::string ex_error;

 };

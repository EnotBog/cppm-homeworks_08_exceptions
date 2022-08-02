#pragma once
#include <string>
#include <stdexcept>



 class MyException :public std::runtime_error
 {
 public:
	
	 MyException(const std::string& message);

 };

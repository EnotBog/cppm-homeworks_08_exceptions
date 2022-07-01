#pragma once
#include <exception>
#include <string>
class MyException : public std::exception
{
public:
	MyException();
	MyException(const std::string &name) : ex_name(name)
	{

	}

	std::string ex_name;

	char const* what() const override;
	

private:

};


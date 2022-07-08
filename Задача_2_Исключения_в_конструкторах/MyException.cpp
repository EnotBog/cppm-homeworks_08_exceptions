#include <exception>
#include "MyException.h"

MyException::MyException(char const* const message) : std::exception(message) {}


MyException::MyException() {};
MyException::~MyException() {};


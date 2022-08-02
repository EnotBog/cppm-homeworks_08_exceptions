
#include "MyException.h"


MyException::MyException(const std::string& message) : std::runtime_error(message) {};



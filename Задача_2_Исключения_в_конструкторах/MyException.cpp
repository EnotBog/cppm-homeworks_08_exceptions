#include <stdexcept>
#include "MyException.h"


MyException::MyException(std::string& message) : std::runtime_error(message) {};



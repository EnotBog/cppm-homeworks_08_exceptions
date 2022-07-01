#include "MyException.h"

	 char const* MyException::what() const 
	{
		return  "Unknown exception";
	}


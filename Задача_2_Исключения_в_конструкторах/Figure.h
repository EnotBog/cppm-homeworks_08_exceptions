#pragma once
#include "Head_includeclass.h"

class Figure
{
public:

	Figure() ;

	virtual std::string print_info_2();

protected:
	std::string get_sides();
	std::string get_corn();
	int get_sides_count();
	std::string get_name();

	int sides_count;
	std::string name;
	std::string sides;
	std::string corn;
};

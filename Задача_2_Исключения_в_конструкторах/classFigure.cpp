#include "Figure.h"


Figure::Figure() { sides_count = 0; this->name = "Фигура:"; }

 void Figure::print_info()
{
	std::cout << get_name() << "\n " << get_corn() << get_sides() << "" << "\n";
}

 std::string Figure::get_sides()
 {
	 return " ";
 }
 std::string Figure::get_corn()
 {
	 return " ";
 }
 int Figure:: get_sides_count()
 {
	 return sides_count;
 }

 std::string Figure::get_name()
 {
	 return name;
 }
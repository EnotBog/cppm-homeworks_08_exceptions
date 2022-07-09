#include "Figure.h"


Figure::Figure() { sides_count = 0; this->name = "Фигура:"; }

 void Figure::print_info()
{
	std::cout << get_name() << "\n " << get_corn() << get_sides() << "" << "\n";
}

  std::string Figure::print_info_2()
 {
	 std::string q;
	 return q = get_name() + " сторон "  + get_sides() + " создана " + "\n";
	
 }

 std::string Figure::get_sides()
 {
	 return "0";
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
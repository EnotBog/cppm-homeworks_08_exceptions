#include "My_Rectangle.h"
#include "MyExceptionQuadrangle.h"

My_Rectangle::My_Rectangle(int a, int b) :Parallelogram(a, b, 90, 90)
{
	this->name = "Прямоугольник: ";
}

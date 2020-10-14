#include "ch13_circle.h"

Circle::Circle()
{
	this->radius = 0.;
}

Circle::Circle(const double radius)
{
	this->radius = radius;
}

bool Circle::operator>=(const Circle C)
{
	return this->radius >= C.radius;
}

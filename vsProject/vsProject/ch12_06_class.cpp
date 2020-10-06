#include "ch12_06_class.h"

GeometricObject::GeometricObject()
{
	this->line1 = this->line2 = 0;
}

GeometricObject::GeometricObject(double line1, double line2)
{
	this->line1 = line1;
	this->line2 = line2;
}

Isosceles::Isosceles()
{
	this->line1 = this->line2 = this->area = this->side = 0;
}

Isosceles::Isosceles(const double width, const double height)
{
	this->line1 = width;
	this->line2 = height;
	this->area = this->side = 0;
}

double Isosceles::FindArea()
{
	area = line1 * line2 / 2;
	return area;
}

double Isosceles::FindRound()
{
	side = sqrt(pow(line1 / 2, 2) + pow(line2, 2));
	return side * 2 + line1;
}

Rectangle::Rectangle()
{
	this->line1 = this->line2 = this->area = this->round = 0;
}

Rectangle::Rectangle(const double width, const double height)
{
	this->line1 = width;
	this->line2 = height;
	this->area = this->round = 0;
}

double Rectangle::FindArea()
{
	area = line1 * line2;
	return area;
}

double Rectangle::FindRound()
{
	round = (line1 * 2) + (line2 * 2);
	return round;
}

#include "ch11_01_class.h"
PFigure::PFigure()
{
	this->color = "";
}
PFigure::PFigure(const string color)
{
	this->color = color;
}
void PFigure::SetColor(const string color)
{
	this->color = color;
}
string PFigure::GetColor()
{
	return this->color;
}
Circle::Circle()
{
	this->area = 0.;
	this->r = 0.;
}
void Circle::SetR(const double r)
{
	this->r = r;
}
double Circle::GetArea()
{
	return this->r * 3.14 * 2;
}
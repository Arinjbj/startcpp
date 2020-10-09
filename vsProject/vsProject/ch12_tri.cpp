#include "ch12_tri.h"

CCoordinates::CCoordinates()
{
	this->c1.x = 0;
	this->c2.x = 0;
	this->c3.x = 0;
	this->c1.y = 0;
	this->c2.y = 0;
	this->c3.y = 0;
}

CCoordinates::CCoordinates(const POINT c1, const POINT c2, const POINT c3)
{
	this->c1 = c1;
	this->c2 = c2;
	this->c3 = c3;
}

double CCoordinates::Distance_c1c2()
{
	double w = c1.x - c2.x;
	double h = c1.y - c2.y;
	return sqrt(w * w + h * h);
}

double CCoordinates::Distance_c1c3()
{
	double w = c1.x - c3.x;
	double h = c1.y - c3.y;
	return sqrt(w * w + h * h);
}

double CCoordinates::Distance_c2c3()
{
	double w = c2.x - c3.x;
	double h = c2.y - c3.y;
	return sqrt(w * w + h * h);
}

Triangle::Triangle()
	:CCoordinates()
{
	this->area = 0;
}

Triangle::Triangle(const POINT c1, const POINT c2, const POINT c3)
	:CCoordinates(c1, c2, c3)
{
	this->area = 0;
}

bool Triangle::isValidTriangle()
{
	return (((c1.x != c2.x) || (c1.x != c3.x) || (c2.x != c3.x)) &&
		((c1.y != c2.y) || (c1.y != c3.y) || (c2.y != c3.y)));
}

double Triangle::Findarea()
{
	if (isValidTriangle())
	{
		double a = Distance_c1c2();
		double b = Distance_c1c3();
		double c = Distance_c2c3();
		double s = (a + b + c) / 2;
		this->area = sqrt(s * (s - a) * (s - b) * (s - c));
		return area;
	}
	else
	{
		cout << "»ï°¢ÇüÀÌ ¾Æ´Õ´Ï´Ù." << endl;
		this->area = -1;
		return area;
	}
}

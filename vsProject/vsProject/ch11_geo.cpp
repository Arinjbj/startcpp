#include "ch11_geo.h"

GeometricFigure::GeometricFigure()
{
	this->color = "white";
}

bool GeometricFigure::IsPaint()
{
	if (this->color == "white")
	{
		return false;
	}
	else
	{
		return true;
	}
}

Rectangle::Rectangle()
{
	this->area = 0.;
	this->height = 0.;
	this->width = 0.;
}

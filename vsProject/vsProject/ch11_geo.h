#ifndef CH11_GEO_H_
#define CH11_GEO_H_

#include <iostream>
#include <string>
using namespace std;

class GeometricFigure
{
public:
	GeometricFigure();
	void SetColor(string const color) { this->color = color; }
	bool IsPaint();
	string GetColor() { return this->color; }
protected:
	string color;
};

class Rectangle : public GeometricFigure
{
public :
	Rectangle();
	void SetWidth(const double width) { this->width = width; }
	void SetHeight(const double height) { this->height = height; }
	void FindArea() { this->area = width * height; }
	double GetWidth() { return this->width; }
	double GetHeight() { return this->height; }
	double GetArea() { return this->area; }
private:
	double width;
	double height;
	double area;
};
#else
#endif
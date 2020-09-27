#ifndef CH11_01_CLASS_H_
#define CH11_01_CLASS_H_

#include <iostream>
#include <string>
using namespace std;

class PFigure
{
public:
	PFigure();
	PFigure(const string color);
	void SetColor(const string color);
	string GetColor();
private:
	string color;
};

class Circle : public PFigure
{
public:
	Circle();
	void SetR(const double r);
	double GetArea();
private:
	double r, area;
};

#else
#endif
#ifndef CH12_06_CLASS_H_
#define CH12_06_CLASS_H_

#include <iostream>
#include <cmath>
using namespace std;

class GeometricObject
{
public:
	GeometricObject();
	GeometricObject(const double line1, const double line2);
	void setline1(const double line1) { this->line1 = line1; }
	void setline2(const double line2) { this->line2 = line2; }
	double getline1() { return this->line1; }
	double getline2() { return this->line2; }
	virtual double FindArea() = 0;
	virtual double FindRound() = 0;
protected:
	double line1;
	double line2;
};

class Isosceles : public GeometricObject
{
public:
	Isosceles();
	Isosceles(const double width, const double height);
	double getarea() { return this->area; }
	double getside() { return this->side; }
	double FindArea();
	double FindRound();
private:
	double area;
	double side;
};

class Rectangle : public GeometricObject
{
public:
	Rectangle();
	Rectangle(const double width, const double height);
	double getarea() { return this->area; }
	double getround() { return this->round; }
	double FindArea();
	double FindRound();
private:
	double area;
	double round;
};

#else
#endif
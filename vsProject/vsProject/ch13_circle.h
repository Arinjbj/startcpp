#ifndef CH13_CIRCLE_H_
#define CH13_CIRCLE_H_

#include <iostream>
using namespace std;
class Circle
{
public:
	Circle();
	Circle(const double radius);
	void setradius(const double radius) { this->radius = radius; }
	double getradius() { return this->radius; }
	bool operator >= (const Circle C);
private:
	double radius;
};

#else
#endif
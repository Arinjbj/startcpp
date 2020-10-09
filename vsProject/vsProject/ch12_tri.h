#ifndef CH12_TRI_H_
#define CH12_TRI_H_

#include <iostream>
#include <cmath>
using namespace std;

typedef struct
{
	double x;
	double y;
} POINT;

class CCoordinates
{
public:
	CCoordinates();
	CCoordinates(const POINT c1, const POINT c2, const POINT c3);
	void setc1(const POINT c1) { this->c1 = c1; }
	void setc2(const POINT c2) { this->c2 = c2; }
	void setc3(const POINT c3) { this->c3 = c3; }
	POINT getc1() { return this->c1; }
	POINT getc2() { return this->c2; }
	POINT getc3() { return this->c3; }
	double Distance_c1c2();
	double Distance_c1c3();
	double Distance_c2c3();
protected:
	POINT c1, c2, c3;
};

class Triangle : public CCoordinates
{
public:
	Triangle();
	Triangle(const POINT c1, const POINT c2, const POINT c3);
	bool isValidTriangle();
	double getarea() { Findarea(); return this->area; }
private:
	double Findarea();
	double area;
};

#else
#endif
#ifndef CH13_IMAGINARYNUMBER_H_
#define CH13_IMAGINARYNUMBER_H_

#include <iostream>
#include <string>
using namespace std;

class ImaginaryNumber
{
public:
	ImaginaryNumber();
	ImaginaryNumber(const double n, const double i);
	void set_n(const double n) { this->n = n; }
	void set_i(const double i) { this->i = i; }
	double get_n() { return this->n; }
	double get_i() { return this->i; }
	string getImaginaryNumber();
	ImaginaryNumber AddImaginary(const ImaginaryNumber ima);
	ImaginaryNumber operator + (const ImaginaryNumber ima);
private:
	double n;
	double i;
};

#else
#endif
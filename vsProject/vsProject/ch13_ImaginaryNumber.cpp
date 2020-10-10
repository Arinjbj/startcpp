#include "ch13_ImaginaryNumber.h"

ImaginaryNumber::ImaginaryNumber()
{
	this->n = 0;
	this->i = 1;
}

ImaginaryNumber::ImaginaryNumber(const double n, const double i)
{
	this->n = n;
	this->i = i;
}

string ImaginaryNumber::getImaginaryNumber()
{
	char nums[40] = {};
	sprintf_s(nums, 20, "%g+%gi", n, i);
	string result(nums);
	return result;
}

ImaginaryNumber ImaginaryNumber::AddImaginary(const ImaginaryNumber ima)
{
	ImaginaryNumber result(*this);
	result.n += ima.n;
	result.i += ima.i;
	return result;
}

ImaginaryNumber ImaginaryNumber::operator+(const ImaginaryNumber ima)
{
	ImaginaryNumber result(*this);
	result.n += ima.n;
	result.i += ima.i;
	return result;
}

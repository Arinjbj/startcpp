#ifndef CH15_GRADE_H_
#define CH15_GRADE_H_

#include <iostream>
using namespace std;

template <typename T>
class Grade
{
public :
	Grade(const T k, const T e, const T m);
	T getsum();
	double getaver();
private:
	T k, e, m, sum;
	double aver;
};

template<typename T>
inline Grade<T>::Grade(const T k, const T e, const T m)
{
	this->k = k;
	this->e = e;
	this->m = m;
}

template<typename T>
inline T Grade<T>::getsum()
{
	sum = k + e + m;
	return sum;
}

template<typename T>
inline double Grade<T>::getaver()
{
	aver = sum / (double)3;
	return aver;
}

#else
#endif
#ifndef _CLASSSAMPLE_H_
#define _CLASSSAMPLE_H_

#include <iostream>
using namespace std;

class ClassSample
{
public:
	ClassSample(int);
	void ShowScore();
	void setScore(const int);
	int getScore();

private:
	int score;
};

#else
#endif
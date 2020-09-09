#include "classsample.h"

ClassSample::ClassSample(int num)
{
	setScore(num);
}

void ClassSample::ShowScore()
{
	cout << "Score : " << score << endl;
}

void ClassSample::setScore(const int num)
{
	score = num;
}

int ClassSample::getScore()
{
	return score;
}
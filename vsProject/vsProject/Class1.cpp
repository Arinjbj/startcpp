#include <iostream>
#include <tchar.h>
#include "classsample.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ClassSample smp(50);
	smp.ShowScore();
	smp.setScore(100);
	smp.ShowScore();
	cout << "getScore() : " << smp.getScore() << endl;
	return 0;
}
#include <iostream>
#include <tchar.h>
#include "stdweight.h"

int _tmain(int argc, _TCHAR* argv[])
{
	StdWeight a(185.5, 45.5);
	a.PrintWeightStatus();
	return 0;
}
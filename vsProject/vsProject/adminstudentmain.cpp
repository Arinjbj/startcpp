#include <iostream>
#include <tchar.h>
#include "adminstudent.h"

int _tmain(int argc, _TCHAR* argv[])
{
	AdminStudent as1;
	as1.InputCourseName();
	as1.InputStudentName();
	as1.Print();
	return 0;
}
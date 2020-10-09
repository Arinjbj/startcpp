#include "ch12_tri.h"

int main()
{
	POINT c1 = { 10, 20 }, c2 = { -10, -20 }, c3 = { 10, 30 };
	CCoordinates obj1(c1, c2, c3);

	cout << obj1.Distance_c1c2() << endl;
	cout << obj1.Distance_c1c3() << endl;
	cout << obj1.Distance_c2c3() << endl;

	c1 = { 4, 9 };
	c2 = { -10, -20 };
	c3 = { 15, 30 };
	Triangle t_obj(c1, c2, c3);

	cout << t_obj.getarea() << endl;

	return 0;
}
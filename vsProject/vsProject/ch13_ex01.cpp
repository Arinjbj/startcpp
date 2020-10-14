#include "ch13_circle.h"

int main()
{
	Circle c1(3.3), c2(4.4);
	cout << (c1 >= c2 ? "True" : "False") << endl;
	return 0;
}
#include "ch13_time.h"

int main()
{
	Time t1(7, 30, 20), t2(8, 10, 10);
	cout << t1.ShowTime() << endl;
	cout << t1.CalSecond() << endl;
	cout << (t1 <= t2 ? "True" : "False") << endl;
	return 0;
}
#include "ch11_02_class.h"

int main()
{
	char str[51];
	StringCharArray one;

	one.assign("Sample");
	one.toCharArray(str);

	cout << one << endl;
	cout << str << endl;
	return 0;
}
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	int a = 1234;

	cout << a << endl;
	cout << setw(5) << a << endl;
	cout << hex << setw(5) << a << endl;
	cout << dec << setw(5) << a << endl;

	double b = 45.6789;

	cout << b << endl;
	cout << fixed << b << endl;
	cout << setprecision(2) << b << endl;

	double c = 123.;

	cout << c << endl;
	cout << setprecision(0) << c << endl;
	cout << showpoint << c << endl;
	return 0;
}
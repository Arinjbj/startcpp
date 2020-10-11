#include "ch13_ImaginaryNumber.h"

int main()
{
	ImaginaryNumber ima1(4.2, 5.1);
	ImaginaryNumber ima2;

	ima2.set_n(7.2);
	ima2.set_i(9.6);
	
	ImaginaryNumber ima3(ima1.AddImaginary(ima2)), ima4;
	cout << ima1.getImaginaryNumber() << endl;
	cout << ima2.getImaginaryNumber() << endl;
	cout << ima3.getImaginaryNumber() << endl;
	ima4 = ima1 + ima2;
	cout << ima4.getImaginaryNumber() << endl;
	++ima4;
	cout << ima4.getImaginaryNumber() << endl;
	ima4++;
	cout << ima4.getImaginaryNumber() << endl;
	return 0;
}
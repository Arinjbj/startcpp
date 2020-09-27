#include "ch11_01_class.h"

int main()
{
	PFigure cir1;

	cir1.SetColor("red");
	cout << cir1.GetColor() << endl;

	Circle cir2;

	cir2.SetColor("blue");
	cir2.SetR(3.);
	cout << cir2.GetColor() << endl;
	cout << cir2.GetArea() << endl;
	return 0;
}
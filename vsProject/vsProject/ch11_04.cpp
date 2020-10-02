#include "ch11_geo.h"

int main()
{
	Rectangle r1;
	r1.SetWidth(3);
	r1.SetHeight(4);
	r1.FindArea();
	r1.SetColor("blue");
	cout << r1.IsPaint() << endl;
	cout << r1.GetColor() << endl;
	cout << r1.GetArea() << endl;
	return 0;
}
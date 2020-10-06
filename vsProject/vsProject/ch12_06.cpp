#include "ch12_06_class.h"

int main()
{
	Isosceles* tri1 = new Isosceles(3, 4);
	cout << tri1->FindArea() << endl;
	cout << tri1->FindRound() << endl;
	delete tri1;

	Rectangle* r1 = new Rectangle();
	r1->setline1(3);
	r1->setline2(4);
	cout << r1->FindArea() << endl;
	cout << r1->FindRound() << endl;
	delete r1;
	return 0;
}
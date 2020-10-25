#include "ch15_grade.h"

int main()
{
	Grade<int> intGrade(90, 87, 65);

	cout << "sum : " << intGrade.getsum() << endl;
	cout << "aver : " << intGrade.getaver() << endl;

	Grade<double> dGrade(34.6, 98.6, 88.9);

	cout << "sum : " << dGrade.getsum() << endl;
	cout << "aver : " << dGrade.getaver() << endl;
	return 0;
}
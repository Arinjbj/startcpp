#include "ch08_triangle.h"
#include <iostream>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
	Triangle t1;
	double side[3];
	for (int i = 1; i <= 3; i++) {
		printf("�ﰢ���� %d��° �� �Է� : ", i);
		scanf_s("%lf", &side[i - 1]);
	}
	t1.set_side1(side[0]);
	t1.set_side2(side[1]);
	t1.set_side3(side[2]);
	printf("�ﰢ���� �� �� : %g, %g, %g\n", t1.get_side1(), t1.get_side2(), t1.get_side3());
	printf("�ﰢ���� ���� : %g", t1.FindArea());
	return 0;
}
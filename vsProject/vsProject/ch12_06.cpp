#include "ch12_06_class.h"

void DisplayGeometricObject(GeometricObject& object)
{
	cout << "line1 : " << object.getline1() << endl;
	cout << "line2 : " << object.getline2() << endl;
	//�ٿ�ĳ����
	GeometricObject* p = &object;
	Isosceles* p1 = dynamic_cast<Isosceles*>(p);
	Rectangle* p2 = dynamic_cast<Rectangle*>(p);

	if (p1 != NULL)
	{
		cout << "�̵ �ﰢ���� ���� : " << p1->FindArea() << endl;
		cout << "�̵ �ﰢ���� �ѷ� : " << p1->FindRound() << endl;
	}
	else if (p2 != NULL)
	{
		cout << "�簢���� ���� : " << p2->FindArea() << endl;
		cout << "�簢���� �ѷ� : " << p2->FindRound() << endl;
	}
}
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

	//��ĳ����
	GeometricObject* p1 = new Isosceles(9, 15);
	Isosceles* p2 = new Isosceles(5, 6);
	cout << p1->getline1() << endl;
	cout << p2->getline1() << endl;

	Isosceles p3(9, 15);
	Rectangle p4(10, 12);

	DisplayGeometricObject(p3);
	cout << "------------------------" << endl;
	DisplayGeometricObject(p4);
	return 0;
}
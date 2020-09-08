#include <iostream>
#include <tchar.h>
#include "e_maxmin.h"

using namespace std;

namespace D_RANGE
{
	int d_score = 100;
	int D_test(int a)
	{
		return a / 10;
	}
}

int D_test(int a)
{
	return a / 5;
}

typedef struct _addressbook {
	char name[20];
	char mphone[20];
	char group[20];
} Addressbook;

typedef struct _addresslist {
	char name[20];
	char mphone[20];
	struct _addresslist* next;
} Addresslist;

int _tmain(int argc, _TCHAR* argv[])
{
	//a
	int a1 = 100;
	cout << "a = " << a1 << endl;

	int a2 = 10, a3 = 20, a4;
	a4 = a2 + a3;
	cout << a2 << " + " << a3 << " = " << a4 << endl;

	//b
	int b_age = 18;
	double b_height;
	cout << "Ű�� �Է��ϼ��� : ";
	cin >> b_height;
	
	int b_radius;
	double b_area;
	cout << "�������� �Է��ϼ��� : ";
	cin >> b_radius;
	b_area = 2 * 3.13 * b_radius;

	cout << "���� : " << b_age << endl;
	cout << "Ű : " << b_height << endl;
	cout << "������ : " << b_radius << endl;
	cout << "���� : " << b_area << endl;

	//c
	double c_money;
	int c_result;

	cout << "���� �ݾ� �Է� : ";
	cin >> c_money;

	c_result = (int)((c_money * 1.025) / 12);
	for (int i = 1; i <= 12; i++)
		cout << i << "���� ���� �� : " << c_result << endl;

	//d
	int d_score = 99;

	cout << "d_score : " << d_score << endl;
	cout << "D_RANGE::d_score : " << D_RANGE::d_score << endl;
	cout << "D_test(100) : " << D_test(100) << endl;
	cout << "D_RANGE::D_test(100) : " << D_RANGE::D_test(100) << endl;

	//e
	int e_num[10] = { 1, 55, 66, 77, 88, 99, 22, 33, 44, 9999 };
	cout << "max : " << E_max(e_num, sizeof(e_num)) << endl;
	cout << "min : " << E_min(e_num, sizeof(e_num)) << endl;

	//f
	Addressbook f1 = { "�赿��", "010-1234-5678", "����" };
	cout << "�̸� : " << f1.name << endl;
	cout << "�ڵ��� : " << f1.mphone << endl;
	cout << "�׷� : " << f1.group << endl;

	Addresslist* item, * head, * current;
	item = new Addresslist();
	strcpy_s(item->name, 20, "Park");
	strcpy_s(item->mphone, 20, "010-9876-5432");
	item->next = NULL;
	head = current = item;

	item = new Addresslist();
	strcpy_s(item->name, 20, "Kim");
	strcpy_s(item->mphone, 20, "010-1111-2222");
	item->next = NULL;
	current->next = item;
	current = item;

	item = new Addresslist();
	strcpy_s(item->name, 20, "Jung");
	strcpy_s(item->mphone, 20, "010-3333-3333");
	item->next = NULL;
	
	current->next = item;

	current = head;
	while (current != NULL)
	{
		cout << current->name << " " << current->mphone << endl;
		current = current->next;
	}

	return 0;
}
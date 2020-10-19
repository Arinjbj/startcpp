#include <iostream>
#include <string>
using namespace std;

int Total(const int k, const int e, const int m) throw(string);
double Average(const int s, const int num) throw(string);

int main()
{
	int kor, eng, math;
	int total = 0;
	double aver = 0;

	cin >> kor >> eng >> math;

	try
	{
		total = Total(kor, eng, math);
		aver = Average(total, 3);
		cout << "�� : " << total << endl;
		cout << "��� : " << aver << endl;
	}
	catch (string msg)
	{
		cout << "********************" << endl;
		cout << msg << endl;
	}
}

int Total(const int k, const int e, const int m) throw(string)
{
	if (k < 0 || e < 0 || m < 0)
	{
		throw string("���� ������ 0���� Ŀ�� �մϴ�");
	}
	return k + e + m;
}

double Average(const int s, const int num) throw(string)
{
	if (s < 0 || num <= 0) throw string("�߸��� �Ű����� �Դϴ�.");
	return s / (double)num;
}

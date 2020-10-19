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
		cout << "합 : " << total << endl;
		cout << "평균 : " << aver << endl;
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
		throw string("과목 점수는 0보다 커야 합니다");
	}
	return k + e + m;
}

double Average(const int s, const int num) throw(string)
{
	if (s < 0 || num <= 0) throw string("잘못된 매개변수 입니다.");
	return s / (double)num;
}

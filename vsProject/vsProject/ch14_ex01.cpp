#include <iostream>
using namespace std;

int PrintAstrisk(const int astriskcnt)
{
	if (astriskcnt <= 0) throw invalid_argument("Invalid argument!!!");
	int printcnt = astriskcnt / 10;
	for (int i = 0; i < printcnt; ++i)
	{
		cout << "*";
	}
	cout << endl;
	return printcnt;
}

int main()
{
	int score, cnt;
	try
	{
		cin >> score;
		cnt = PrintAstrisk(score);
		cout << "cnt : " << cnt << endl;
	}
	catch (exception &e)
	{
		cout << "exception : " << e.what() << endl;
		cout << "typeid : " << typeid(e).name() << endl;
	}
	return 0;
}
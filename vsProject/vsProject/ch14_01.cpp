#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int quo, rem;

	cout << "n1 : ";
	cin >> n1;
	cout << "n2 : ";
	cin >> n2;

	try
	{
		if (n2 == 0)
		{
			throw n1;
		}
		quo = n1 / n2;
		rem = n1 % n2;

		cout << "quo : " << quo << endl;
		cout << "rem : " << rem << endl;
	}
	catch (int num)
	{
		cout << num << "은 0으로 나눌 수 없습니다." << endl;
	}

	return 0;
}
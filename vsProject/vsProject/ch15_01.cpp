#include <iostream>
using namespace std;

template <typename T>
T MaxValue(const T num1, const T num2)
{
	if (num1 > num2) return num1;
	else return num2;
}

int main()
{
	cout << "���� ��(3, 5) : " << MaxValue(3, 5) << endl;
	cout << "�������� ��(9.1, 3.6) : " << MaxValue(9.1, 3.6) << endl;
	cout << "���� ��('A', 'b') : " << MaxValue('A', 'b') << endl;
	return 0;
}
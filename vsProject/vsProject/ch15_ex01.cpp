#include "ch15_stack.h"

int main()
{
	StackT<double> s;
	double n;

	cout << "�Է� : ";
	cin >> n;
	for (int i = 0; i < 100; ++i)
	{
		s.push(n);
		n += 10;
	}

	cout << "�Է� : ";
	cin >> n;
	s.push(n);

	for (int i = 99; i >= 0; --i)
	{
		cout << "���(" << i + 1 << "/100) : " << s.pop() << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;

class A
{
public:
	virtual string ClassMessage()
	{
		return "class A";
	}
};
class B : public A
{
public:
	string ClassMessage()
	{
		return "class B";
	}
};
void Func1(A* x)
{
	cout << x->ClassMessage() << endl;
}
int main()
{
	A a;
	B b;

	Func1(&a);
	Func1(&b);
	return 0;
}
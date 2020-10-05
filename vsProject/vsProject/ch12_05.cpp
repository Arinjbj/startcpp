#include <iostream>
using namespace std;

class AbstractClass
{
public:
	virtual string Func1() = 0;
};

class TestClass : public AbstractClass
{
public:
	string Func1()
	{
		return "SampleFunc1";
	}
};

int main()
{
	TestClass t1;
	cout << t1.Func1() << endl;
	return 0;
}
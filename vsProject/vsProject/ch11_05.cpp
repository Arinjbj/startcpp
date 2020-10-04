#include <iostream>
using namespace std;

class Con1
{
public:
	Con1();
	Con1(const int n);
	~Con1();
protected:
	int n;
};

class Con2 : public Con1
{
public:
	Con2();
	~Con2();
};
//******************
int main()
{
	Con2* cp1 = new Con2();
	delete cp1;
	return 0;
}
//********************
Con1::Con1()
{
	this->n = 0;
	cout << "***Con1***" << endl;
}

Con1::Con1(const int n)
{
	this->n = n;
	cout << "***Con1***" << endl;
}

Con1::~Con1()
{
	cout << "~~~Con1~~~" << endl;
}

Con2::Con2()
	:Con1(0)
{
	cout << "***Con2***" << endl;
}

Con2::~Con2()
{
	cout << "~~~Con2~~~" << endl;
}

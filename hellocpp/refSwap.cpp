#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
	int nTmp;
	nTmp = a;
	a = b;
	b = nTmp;
}


int main(int argc, char* argv[])
{
	int x(10), y(20);
	// 참조전달 
	Swap(x, y);
	cout << x << endl;
	cout << y << endl;
}

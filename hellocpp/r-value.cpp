#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
	// r-value�� �̸����� �ӽ� ��ü�� ���Ҷ� �߿� 
	// a�� l-value (l�� location), 10�� r-value 
	int a = 10;
	int &rData = a;
	
	int &&rNewData = 5;
	return 0;
}

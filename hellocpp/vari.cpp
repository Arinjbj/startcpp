#include <iostream>

void TestFunc(int a, char* ptr)
{
	
}

int main(int argc, char *argv[])
{
	//���� �� ����
	int a = 10;		//c��� ��Ÿ��
	auto b(10);		//c++ ��Ÿ��
	auto c = b;
	
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	
	void(*pfTest)(int, char*) = TestFunc;
	
	auto pfTest2(TestFunc);
	return 0; 
}

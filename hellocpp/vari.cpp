#include <iostream>

void TestFunc(int a, char* ptr)
{
	
}

int main(int argc, char *argv[])
{
	//선언 및 정의
	int a = 10;		//c언어 스타일
	auto b(10);		//c++ 스타일
	auto c = b;
	
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	
	void(*pfTest)(int, char*) = TestFunc;
	
	auto pfTest2(TestFunc);
	return 0; 
}

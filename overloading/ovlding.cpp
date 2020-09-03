#include <iostream>

int Add(int a, int b)
{
	return a + b;
}

double Add(double a, double b)
{
	return a + b;
}

int main(int argc, char* argv[])
{
	std::cout << Add(3, 4) << std::endl;
	std::cout << Add(3.3, 4.4) << std::endl; //유지보수 측면에서 좋지않은 코드이다. 템플릿을 쓰자.
	return 0;
}

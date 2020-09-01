#include <iostream>

//default parameter는 함수 선언 시 표기
void testFunc(int, int = 10);

//Caller
int main(int argc, char* argv[])
{
	testFunc(3);
	testFunc(3, 5);
	return 0;
}

//Callee
void testFunc(int a, int b)
{
	printf("a: %d, b: %d\n", a, b);
}

//단, default parameter는 함수의 원형을 짐작할 수 없게하기 때문에 되도록 사용하지 말자.

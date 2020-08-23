#include <iostream>

int main(int argc, char * argv[])
{
	int aList[5] = {10, 20, 30, 40, 50};
	
	for(int i = 0; i < 5; i++)
		printf("%d\n", aList[i]);
	
	//aList의 요소의 갯수만큼 for문이 돌아간다. 
	//aList배열의 갯수가 달라져도 for문을 수정할 필요가 없다. 
	for(auto n : aList)
		printf("%d\n", n);
	
	//단, 위의 코드에서는 원본에 영향을 줄 수 없다. (읽기모드) 
	for(auto n : aList)
		n = 0;
	for(auto n : aList)
		printf("%d\n", n);
		
	//범위기반 for문에서 원본에 영향을 주고싶다면 참조자를 이용하자. (쓰기모드) 
	for(auto &n : aList)
		n = 7;
	for(auto n : aList)
		printf("%d\n", n);
	
	return 0;
}

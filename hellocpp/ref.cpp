#include <iostream>

int main(int argc, char* argv[])
{
	int nData(10);
	std::cout << nData << std::endl;
	
	//참조자는 '별명'이다. 
	int &rData(nData);
	
	nData = 5;
	std::cout << nData << std::endl;
	std::cout << rData << std::endl;
	std::cout << &nData << std::endl;
	std::cout << &rData << std::endl;
	
	//포인터는 변수이기 때문에 가리키는 값이 변할 수 있다. 
	int nData1(10);
	int nData2(20);
	
	int *pnData = &nData1;
	//nData1 = 5;
	*pnData = 5;
	
	pnData = &nData2;
	//nData2 = 5;
	*pnData = 5;
	
	//참조자는 가리키는 값이 변하지 않는 포인터
	int nData3(30);
	int &rData3(nData3);
	rData3 = 60;
	std::cout << rData3 << std::endl;
	return 0;
}

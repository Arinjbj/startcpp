#include <iostream>

int main(int argc, char* argv[])
{
	int nData(10);
	std::cout << nData << std::endl;
	
	//�����ڴ� '����'�̴�. 
	int &rData(nData);
	
	nData = 5;
	std::cout << nData << std::endl;
	std::cout << rData << std::endl;
	std::cout << &nData << std::endl;
	std::cout << &rData << std::endl;
	
	//�����ʹ� �����̱� ������ ����Ű�� ���� ���� �� �ִ�. 
	int nData1(10);
	int nData2(20);
	
	int *pnData = &nData1;
	//nData1 = 5;
	*pnData = 5;
	
	pnData = &nData2;
	//nData2 = 5;
	*pnData = 5;
	
	//�����ڴ� ����Ű�� ���� ������ �ʴ� ������
	int nData3(30);
	int &rData3(nData3);
	rData3 = 60;
	std::cout << rData3 << std::endl;
	return 0;
}

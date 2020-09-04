#include <iostream>
#include <tchar.h>
#include <cstdlib>

using namespace std;

class CTest
{
public:
	CTest()
	{
		cout << "CTest()" << endl;
	}

	~CTest()
	{
		cout << "~CTest()" << endl;
	}

	int m_nData = 0;		//C++11
};

CTest a;		//���κ��� �����ڰ� ���� ȣ�� �� ���� ����

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Begin of main()" << endl;
	CTest a;
	cout << "End of main()" << endl;

	cout << "////////////////////////////////" << endl;

	CTest* ptest = (CTest*)malloc(sizeof(CTest));	//�ν��Ͻ��� ���� �޸� ������ Ȯ��(������, �Ҹ��� ȣ��x)
	free(ptest);

	printf("\n/////\n");

	CTest* ptest2 = new CTest;						//�ν��Ͻ��� �θ�(������, �Ҹ��� ȣ��o)
	delete ptest2;

	printf("\n/////\n");
	return 0;
}// '}' �̰��� ���������� �Ҹ�����̸�, �̶� �Ҹ��� ȣ���� �̷������.
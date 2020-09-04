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

CTest a;		//메인보다 생성자가 먼저 호출 될 수도 있음

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Begin of main()" << endl;
	CTest a;
	cout << "End of main()" << endl;

	cout << "////////////////////////////////" << endl;

	CTest* ptest = (CTest*)malloc(sizeof(CTest));	//인스턴스를 담을 메모리 공간을 확보(생성자, 소멸자 호출x)
	free(ptest);

	printf("\n/////\n");

	CTest* ptest2 = new CTest;						//인스턴스를 부름(생성자, 소멸자 호출o)
	delete ptest2;

	printf("\n/////\n");
	return 0;
}// '}' 이것이 지역변수의 소멸시점이며, 이때 소멸자 호출이 이루어진다.
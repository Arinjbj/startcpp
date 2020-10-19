#include <iostream>
#include <exception>
using namespace std;

int main()
{
	try
	{
		for (int i = 1; i <= 100; ++i)
		{
			new int[70000000];
			cout << i << "번째 배열이 생성되었습니다." << endl;
		}
	}
	catch (bad_alloc& e)
	{
		cout << "Exception : " << e.what() << endl;
	}
	return 0;
}
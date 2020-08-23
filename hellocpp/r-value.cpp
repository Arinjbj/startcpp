#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
	// r-value는 이름없는 임시 객체를 논할때 중요 
	// a는 l-value (l은 location), 10은 r-value 
	int a = 10;
	int &rData = a;
	
	int &&rNewData = 5;
	return 0;
}

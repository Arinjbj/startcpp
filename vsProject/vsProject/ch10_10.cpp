#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ofstream fileout;
	ifstream filein;
	char str[1000];
	cout << "파일에 입력할 내용을 쓰세요 : ";
	cin.getline(str, 1000);
	fileout.open("10_10.txt");
	fileout << str << endl;
	fileout.close();
	filein.open("10_10.txt");
	if (filein.fail())
	{
		cout << "파일열기 오류!!" << endl;
	}
	else
	{
		filein.getline(str, 1000);
		cout << "파일 내용 : " << str << endl;
	}
	filein.close();
	return 0;
}
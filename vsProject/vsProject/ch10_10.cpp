#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ofstream fileout;
	ifstream filein;
	char str[1000];
	cout << "���Ͽ� �Է��� ������ ������ : ";
	cin.getline(str, 1000);
	fileout.open("10_10.txt");
	fileout << str << endl;
	fileout.close();
	filein.open("10_10.txt");
	if (filein.fail())
	{
		cout << "���Ͽ��� ����!!" << endl;
	}
	else
	{
		filein.getline(str, 1000);
		cout << "���� ���� : " << str << endl;
	}
	filein.close();
	return 0;
}
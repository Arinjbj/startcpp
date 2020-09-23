#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "Com";
	cout << str1 + "puter" << endl;	//일회용
	cout << str1 << endl;
	str1 += "puter";				//지속가능
	cout << str1 << endl;
	string str2 = "Science";
	str1 += str2;
	cout << str1 << endl;
	cout << (str1 > str2) << endl;	//str1.compare(str2)와 비슷
	cout << (str1 != str2) << endl;
	for (int i = 0; i < (int)str1.length(); ++i)
	{
		cout << str1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < (int)str1.length(); ++i)
	{
		cout << str1.at(i) << " ";
	}
	return 0;
}
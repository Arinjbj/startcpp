#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1;
	str1 = "string";
	cout << str1 << endl;
	
	string str2(str1);
	cout << str2.append("2") << endl;

	char s[10] = "string3";
	string str3(s);
	cout << str3 << endl;

	string str4(5, 'S');
	cout << str4 << endl;
	return 0;
}
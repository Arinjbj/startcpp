#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "Computer";
	cout << str1.empty() << endl;
	str1.erase();
	cout << str1.empty() << endl;

	str1.assign("ComputerScience");
	cout << str1.substr(0, 8) << endl;

	string str2("HelloWorld!");
	str1.swap(str2);
	cout << str1 << endl;
	return 0;
}
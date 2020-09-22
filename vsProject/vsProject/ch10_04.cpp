#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "Computer";
	str1.assign("Science");
	cout << str1 << endl;

	string str2;
	str2.assign("ComputerScience", 8, 7);
	cout << str2 << endl;
	str2.assign("ComputerScience", 8);
	cout << str2 << endl;

	string str3("Computer");
	str3.assign(3, '!');
	cout << str3 << endl;
	return 0;
}
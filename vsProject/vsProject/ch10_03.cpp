#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "Computer";
	str1.append("Science");
	cout << str1 << endl;

	string str2;
	str2.append("ComputerScience", 0, 8);
	cout << str2 << endl;

	str2.append(10, '!');
	cout << str2 << endl;
	return 0;
}
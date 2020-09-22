#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1("ComputerScience");
	cout << str1.find('e') << endl;
	cout << str1.find('e', 8) << endl;

	string str2("test1test2test3test4test5");
	string str3("test4");
	cout << str2.find("test4") << endl;
	cout << str2.find(str3) << endl;
	cout << str2.find(str3, 5) << endl;

	string str4("Computer");
	string str5("Science");
	str5.replace(0, 2, str4);
	cout << str5 << endl;
	return 0;
}
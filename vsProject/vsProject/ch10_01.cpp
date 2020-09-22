#include <iostream>
#include <string>
#include <tchar.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string name;

	name = "문자열";

	cout << name << endl;
	cout << "문자열 길이 : " << name.length() << endl;

	name = name + "클래스";
	cout << name << endl;

	string name2(name);

	name2.append("ComputerScience", 0, 8);
	cout << name2 << endl;
	cout << name2.length() << endl;
	cout << name2.size() << endl;

	return 0;
}
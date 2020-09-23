#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1("Computer");
	string str2("Science");

	cout << str1.compare(str2) << endl;			//Computer < Science = -1
	str2.assign("Coma");
	cout << str1.compare(0, 4, str2) << endl;	//Comp > Coma = 1
	cout << str1.compare(0, 3, str2, 0, 3) << endl;	//(Com == Com) = 0

	str1.assign("AAAA");
	str2.assign("BBBB");
	cout << str1.insert(1, str2) << endl;
	cout << str1.erase(1, 4) << endl;
	cout << str1.insert(1, 3, 'Z') << endl;
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "Computer";
	cout << str.at(3) << endl;

	cout << str.length() << endl;
	cout << str.size() << endl;

	str.clear();
	cout << '(' << str << ')' << endl;
	str.assign("Science");
	str.erase(1, 2);
	cout << str << endl;
	return 0;
}
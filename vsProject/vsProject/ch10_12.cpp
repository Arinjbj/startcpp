#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream fs;

	fs.open("ch10_12.txt", ios::out);
	if (fs.fail())
	{
		cout << "파일 오류!!" << endl;
		return 0;
	}
	else
	{
		fs << "keyboard" << endl;
		fs << "monitor" << endl;
	}
	fs.close();

	fs.open("ch10_12.txt", ios::app);
	fs << "desk" << endl;
	fs.close();

	fs.open("ch10_12.txt", ios::in);
	string temp;
	while (fs >> temp, !fs.eof())
	{
		cout << temp << endl;
	}
	fs.close();

	return 0;
}
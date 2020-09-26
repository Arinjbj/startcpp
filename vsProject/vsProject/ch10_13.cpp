#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fp;
	int score[5] = { 11, 22, 55, 33, 44 };
	int score2;

	fp.open("ch10_13.bin", ios::out | ios::binary);
	fp.write((char*)score, 20);
	fp.close();

	fp.open("ch10_13.bin", ios::in | ios::binary);
	if (fp.fail()) return -1;
	while (fp.read((char*)&score2, sizeof(int)), !fp.eof())
	{
		cout << score2 << endl;
	}
	fp.close();
	cout << "-------------------" << endl;
	fp.open("ch10_13.bin", ios::in | ios::binary);
	if (fp.fail()) return -1;
	fp.read((char*)&score2, sizeof(int));
	cout << score2 << endl;
	fp.seekg(sizeof(int), ios::cur);
	fp.read((char*)&score2, sizeof(int));
	cout << score2 << endl;
	
	return 0;
}
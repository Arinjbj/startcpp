#include <iostream>
#include <fstream>
#include <string>
#define MAX 50
using namespace std;

typedef struct OneStudent {
	string name;
	int score[3];
	int sum;
	double aver;
} OneStudent;

int main()
{
	char fn[] = { "sung.txt" };
	OneStudent OneLine[MAX] = {};
	fstream fp;
	int i, len;
	fp.open(fn, ios::in);
	if (fp.fail())
	{
		cout << "파일 열기 오류!!" << endl;
		return -1;
	}
	i = 0;
	while (!fp.eof())
	{
		fp >> OneLine[i].name >> OneLine[i].score[0] >> OneLine[i].score[1] >> OneLine[i].score[2];
		OneLine[i].sum = OneLine[i].score[0] + OneLine[i].score[1] + OneLine[i].score[2];
		OneLine[i].aver = (double)OneLine[i].sum / 3;
		++i;
	}
	for (i = 0; OneLine[i].sum != 0; ++i)
	{
		cout << OneLine[i].sum << " " << OneLine[i].aver << endl;
	}
	fp.close();
	return 0;
}
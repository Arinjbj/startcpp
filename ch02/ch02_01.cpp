#include <iostream>
using namespace std;

int main()
{
	int kor, math, eng, sum;
	double aver;
	
	kor = 100;
	math = 98;
	eng = 79;
	
	sum = kor + math + eng;
	aver = (double)sum / 3;
	
	cout << "ÃÑÁ¡ : " << sum << endl;
	cout << "Æò±Õ : " << aver << endl;
	return 0;
}

#include <iostream>
using namespace std;

class Grade
{
public:
	Grade();
	Grade(const int kor, const int eng, const int math);
	int GetTotal();
	double GetAver();
private:
	int kor, eng, math, total;
	double aver;
};

class GradeException : public logic_error
{
public:
	GradeException(const int total, const int num);
	int GetTotal() { return this->total; }
	int GetNum() { return this->num; }
private:
	int total, num;
};

int main()
{
	int kor, eng, math;
	cin >> kor >> eng >> math;
	try
	{
		Grade g1(kor, eng, math);
		cout << "Total : " << g1.GetTotal() << endl;
		cout << "Average : " << g1.GetAver() << endl;
	}
	catch (GradeException& e)
	{
		cout << e.what() << endl;
		cout << "전달된 총점 : " << e.GetTotal() << endl;
		cout << "전달된 과목수 : " << e.GetNum() << endl;
	}
	return 0;
}

Grade::Grade()
{
	this->kor = this->eng = this->math = this->total = 0;
	this->aver = 0.;
}

Grade::Grade(const int kor, const int eng, const int math)
{
	this->kor = kor;
	this->eng = eng;
	this->math = math;
	this->total = 0;
	this->aver = 0.;
}

int Grade::GetTotal()
{
	if (kor <= 0 || eng <= 0 || math <= 0)
	{
		throw GradeException(total, 3);
	}
	this->total = kor + eng + math;
	return total;
}

double Grade::GetAver()
{
	if (total < 0)
	{
		throw GradeException(total, 3);
	}
	this->aver = total / (double)3;
	return aver;
}

GradeException::GradeException(const int total, const int num)
	:logic_error("잘못된 인수값")
{
	this->total = total;
	this->num = num;
}

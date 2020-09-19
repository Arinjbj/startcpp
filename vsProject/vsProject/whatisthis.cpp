#include <iostream>
#include <tchar.h>

class Sample {
public:
	Sample(int score) { this->score_ = score; }
	void set_score(int score) { this->score_ = score; }
	int get_score() { return score_; }
	void Print() { printf("score : %d\n", score_); }
private:
	int score_;
};

int _tmain(int argc, _TCHAR* argv[])
{
	Sample s1(100);
	s1.Print();
	s1.set_score(50);
	s1.Print();
	return 0;
}
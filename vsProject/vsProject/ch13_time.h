#ifndef CH13_TIME_H_
#define CH13_TIME_H_

#include <iostream>
#include <string>
using namespace std;
class Time
{
public:
	Time();
	Time(const unsigned int h, const unsigned int m, const unsigned int s);
	unsigned int CalSecond();
	string ShowTime();
	bool operator <= (Time T);
	bool operator >= (Time T);

	void set_h(const unsigned int h) { this->h = h; }
	void set_m(const unsigned int m) { this->m = m; }
	void set_s(const unsigned int s) { this->s = s; }
	unsigned int get_h() { return this->h; }
	unsigned int get_m() { return this->m; }
	unsigned int get_s() { return this->s; }
private:
	unsigned int h, m, s;
};

#else
#endif
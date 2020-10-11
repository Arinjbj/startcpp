#include "ch13_time.h"

Time::Time()
{
	this->h = this->m = this->s = 0;
}

Time::Time(const unsigned int h, const unsigned int m, const unsigned int s)
{
	this->h = h;
	this->m = m;
	this->s = s;
}

unsigned int Time::CalSecond()
{
	return (h * 3600) + (m * 60) + s;
}

string Time::ShowTime()
{
	char result[40];
	sprintf_s(result, 40, "%dΩ√ %d∫– %d√ ", h, m, s);
	return string(result);
}

bool Time::operator<=(Time T)
{
	return (this->CalSecond() <= T.CalSecond());
}

bool Time::operator>=(Time T)
{
	return (this->CalSecond() >= T.CalSecond());
}

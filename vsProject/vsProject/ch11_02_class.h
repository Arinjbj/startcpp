#ifndef CH11_02_CLASS_H_
#define CH11_02_CLASS_H_

#include <iostream>
#include <string>
using namespace std;
class StringCharArray : public string
{
public:
	void toCharArray(char* str);
};

#else
#endif
#include "ch11_02_class.h"

void StringCharArray::toCharArray(char* str)
{
	int len = this->length();
	for (int i = 0; i < len; ++i)
	{
		*(str + i) = this->at(i);
	}
	*(str + len) = '\0';
}

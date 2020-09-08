#include "e_maxmin.h"

int E_max(int* num, int size)
{
	int max = *num;
	size /= sizeof(int);
	for (int i = 0; i < size; i++)
	{
		if (*(num + i) > max) max = *(num + i);
	}
	return max;
}

int E_min(int* num, int size)
{
	int min = *num;
	size /= sizeof(int);
	for (int i = 0; i < size; i++)
	{
		if (num[i] < min) min = num[i];
	}
	return min;
}
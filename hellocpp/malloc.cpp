#include <iostream>

int main(int argc, char* argv[])
{
	//C
	int *pnData = (int*)malloc(sizeof(int) * 5);
	free(pnData);
	
	//C++
	int *pnNewData = new int[5];
	delete [] pnNewData;
	return 0;
}

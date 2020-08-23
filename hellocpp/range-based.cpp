#include <iostream>

int main(int argc, char * argv[])
{
	int aList[5] = {10, 20, 30, 40, 50};
	
	for(int i = 0; i < 5; i++)
		printf("%d\n", aList[i]);
	
	//aList�� ����� ������ŭ for���� ���ư���. 
	//aList�迭�� ������ �޶����� for���� ������ �ʿ䰡 ����. 
	for(auto n : aList)
		printf("%d\n", n);
	
	//��, ���� �ڵ忡���� ������ ������ �� �� ����. (�б���) 
	for(auto n : aList)
		n = 0;
	for(auto n : aList)
		printf("%d\n", n);
		
	//������� for������ ������ ������ �ְ�ʹٸ� �����ڸ� �̿�����. (������) 
	for(auto &n : aList)
		n = 7;
	for(auto n : aList)
		printf("%d\n", n);
	
	return 0;
}

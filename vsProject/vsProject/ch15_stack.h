#ifndef CH15_STACK_H_
#define CH15_STACK_H_

#include <iostream>
using namespace std;
class Stack
{
public:
	Stack();
	bool isFulled();
	bool isEmpty();
	void push(const int data);
	int pop();
private:
	int data[100];
	int top;
};

#else
#endif
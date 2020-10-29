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

template <typename T>
class StackT
{
public:
	StackT();
	bool isFulled();
	bool isEmpty();
	void push(const T data);
	T pop();
private:
	T data[100];
	int top;
};

template <typename T>
StackT<T>::StackT()
{
	fill_n(this->data, 100, 0);
	this->top = -1;
}

template <typename T>
bool StackT<T>::isFulled()
{
	return (top >= 99);
}

template <typename T>
bool StackT<T>::isEmpty()
{
	return (this->top == -1);
}

template <typename T>
void StackT<T>::push(const T data)
{
	try
	{
		if (this->isFulled()) throw(this->top);
		++(this->top);
		this->data[top] = data;
		cout << "Stack(" << top + 1 << "/100) : " << data << endl;
	}
	catch (int n)
	{
		cout << "스택이 꽉찼습니다. (" << n + 1 << "/ 100), " << data << "입력실패." << endl;
	}
}

template <typename T>
T StackT<T>::pop()
{
	T output;
	try
	{
		if (this->isEmpty()) throw(this->top);
		output = this->data[top];
		--(this->top);
		return output;
	}
	catch (int n)
	{
		cout << "스택이 비어있습니다. (" << n + 1 << "/ 100)" << endl;
		return 0;
	}
}
#else
#endif
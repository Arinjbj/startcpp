#include "ch15_stack.h"

Stack::Stack()
{
	fill_n(this->data, 100, 0);
	this->top = -1;
}

bool Stack::isFulled()
{
	return (top >= 99);
}

bool Stack::isEmpty()
{
	return (this->top == -1);
}

void Stack::push(const int data)
{
	try
	{
		if (this->isFulled()) throw(this->top);
		++(this->top);
		this->data[top] = data;
		cout <<"Stack(" << top + 1 << "/100) : " << data << endl;
	}
	catch (int n)
	{
		cout << "������ ��á���ϴ�. (" << n + 1 << "/ 100), " << data << "�Է½���." << endl;
	}
}

int Stack::pop()
{
	int output;
	try
	{
		if (this->isEmpty()) throw(this->top);
		output = this->data[top];
		--(this->top);
		return output;
	}
	catch (int n)
	{
		cout << "������ ����ֽ��ϴ�. (" << n + 1 << "/ 100)" << endl;
		return 0;
	}
}

#include "stack.h"



Stack::Stack()
{
	Top = -1;
}


Stack::~Stack()
{
}

bool Stack::isEmpty()
{
	if (Top < 0)
	{
		return 1;
	}
	else return 0;
}

bool Stack::isFull()
{
	if (Top == MAX - 1)
	{
		return 1;
	}
	else
		return 0;
}

int Stack::push(int value) 
{
	
	
	
	if (!isFull())
	{
		++Top;
		data[Top] = value;
		return value;
	}
	return 0;
}

int Stack::pop()
{
	if (!isEmpty())
	{
		int value;
		value = data[Top];
		--Top;
		return value;
	}
	return 0;
}

void Stack::displayItems()
{
	int i=0;
	cout << "\nthe entered numbers are::";
	while (i <= Top)
	{
		
		cout << "  "<<data[i];
		i++;
	}

}
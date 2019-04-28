#include<iostream>
using namespace std;
#define MAX 5
#include<conio.h>
class Stack
{
	int Top;
	int data[MAX];

public:
	Stack();
	~Stack();
	int push(int);
	int pop();
	void displayItems();
	bool isEmpty();
	bool isFull();

};


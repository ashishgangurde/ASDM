#include"stack.h"
#include<conio.h>


int main()

{
	Stack s1;
	s1.push(5);
	s1.push(50);
	s1.displayItems();
	s1.push(30);
	s1.displayItems();
	s1.pop();
	s1.displayItems();
	s1.push(40);
	s1.push(20);
	s1.displayItems();
	

	_getch();
	return 0;
}
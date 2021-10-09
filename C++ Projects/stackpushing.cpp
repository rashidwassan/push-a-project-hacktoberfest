Pushing in Stack-Array
/* C++ Stack - Example Program of C++ Stack
 * This C++ program demonstrates the concept
 * of Pushing in the stack-array in C++ */

#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

int push(int [], int &, int);
void display(int [], int);
const int SIZE = 50;

void main()
{
	clrscr();
	int stack[SIZE], item, top=-1, res;
	char ch='y';
	while(ch=='y' || ch=='Y')
	{
		cout<<"Enter item for insertion: ";
		cin>>item;
		res = push(stack, top, item);
		if(res == -1)
		{
			cout<<"Overflow..!!..Aborting..Press a key to exit..\n";
			getch();
			exit(1);
		}
		cout<<"Element inserted successfully..!!\n";
		cout<<"\nThe Stack now is:\n";
		display(stack, top);
		cout<<"\nWant to enter more ? (y/n).. ";
		cin>>ch;
	}
	getch();
}

int push(int stack[], int &top, int elem)
{
	if(top == SIZE-1)
	{
		return -1;
	}
	else
	{
		top++;
		stack[top] = elem;
	}
	return 0;
}
void display(int stack[], int top)
{
	cout<<stack[top]<<" <-- "<<"\n";
	for(int i=top-1; i>=0; i--)
	{
		cout<<stack[i]<<"\n";
	}
}
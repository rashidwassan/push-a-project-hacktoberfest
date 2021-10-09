/* C++ Stack - Example Program of C++ Stack
 * This C++ program demonstrates the concept
 * of Popping from the stack-array in C++ */

#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

int pop(int [], int &);
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
		cout<<"\nThe Stack now is:\n";
		display(stack, top);
		cout<<"\nWant to enter more ? (y/n).. ";
		cin>>ch;
	}
	cout<<"Now the deletion of elements starts..\n";
	ch='y';
	while(ch=='y' || ch=='Y')
	{
		res = pop(stack, top);
		if(res==-1)
		{
			cout<<"\nUnderflow..!!..Aborting..!!..Press a key to exit..\n";
			getch();
			exit(2);
		}
		else
		{
			cout<<"\nElement deleted is: "<<res<<endl;
			cout<<"\nThe Stack now is:\n";
			display(stack, top);
		}
		cout<<"Want to delete more ? (y/n).. ";
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

int pop(int stack[], int &top)
{
	int ret;
	if(top==-1)
	{
		return -1;
	}
	else
	{
		ret=stack[top];
		top--;
	}
	return ret;
}

void display(int stack[], int top)
{
	if(top==-1)
	{
		return;
	}
	cout<<stack[top]<<" <-- "<<"\n";
	for(int i=top-1; i>=0; i--)
	{
		cout<<stack[i]<<"\n";
	}
}
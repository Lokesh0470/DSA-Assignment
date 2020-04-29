#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void push(int);
void pop();
void display();
int stack[SIZE], top=-1;
int main()
{
	while(1)
	{
		int choice,element;
		printf("\n1.Push \n2.Pop \n3.Display \n4.exit");
		printf("\nEnter your choice\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: printf("Enter the element you want to add: ");
			scanf("%d",&element);
			push(element);
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			case 4: exit(1);
			break;
			default: printf("You have entered invalid number");
		}
	}
}
void push(int element)
{
	if(top==SIZE-1)
	{
		printf("Overflow");
	}
	else
	{
		top++;
		stack[top]=element;
		printf("Insertion Success");
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Underflow");
	}
	else
	{
		printf("Deleted: %d", stack[top]);
		top--;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Underflow");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d", stack[i]);
		}
	}
	
}


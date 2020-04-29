#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void enq(int);
void deq();
void display();
int queue[SIZE], front=-1,rear=-1;
int main()
{
	while(1)
	{
		int choice,element;
		printf("\n1.enq\n2.deq\n3.display\n4.exit");
		printf("\nEnter your choice");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: printf("Enter the element you want to add");
			scanf("%d",&element);
			enq(element);
			break;
			case 2: deq();
			break;
			case 3: display();
			break;
			case 4: exit(0);
			break;
			default: printf("You have entered invalid number");
		}
	}
}
void enq(int element)
{
	if(rear==SIZE-1)
	{
		printf("Overflow");
	}
	else
	{
		if(front==-1)
			front=0;
		rear++;
		queue[rear]=element;
		printf("Insertion Success");
	}
}
void deq()
{
	if(front==-1&&rear==-1)
	{
		printf("Underflow");
	}
	else
	{
		printf("Deleted = %d", queue[front]);
		front++;
		if(front==rear)
			front=rear=-1;
	}
}
void display()
{
	int i;
	if(front==-1&&rear==-1)
	{
		printf("Underflow");
	}
	else
	{
		for(i=front;i<=rear;i++)
		printf("%d", queue[i]);
	}
	
}

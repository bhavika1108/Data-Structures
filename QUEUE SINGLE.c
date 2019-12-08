#include<stdio.h>
#include<process.h>
#include<string.h>
#define size 100

int queue[size];
int rear=-1;
int front=-1;
int r;

void insert_queue(int x)
{
	if(rear==size-1)
	printf("Queue is full...");
	else
	if(front==-1)
	{
		front=0;
		rear=0;
		queue[rear]=x;
	}
	else
	{
		rear++;
		queue[rear]=x;
	}
}

int remove_queue()
{
	if(front==-1 && rear==-1)
	printf("Empty");
	
	else 
	if(front==rear)
	{
		r=queue[front];
		front=rear=-1;
	}
	else
	{
		r=queue[front];
		front++;
	}
return r;
}

void display_queue()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",queue[i]);
	}
}
void main()
{
	int choice;
	int v,x;
	
	do
	{
		printf("Enter 1 for insert\n");
		printf("2. delete\n");
		printf("3. display\n");
		printf("4. Exit\n");
		printf("Enter Your Choice : ");
		scanf("%d",&choice);
		
	switch(choice)
	{
		case 1:
			printf("Enter Expression to add : ");
			scanf("%d",&v);
			insert_queue(v);
		break;
		
		case 2:
			v=remove_queue();
			printf("Enter expression to delete %d",v);
		break;
		
		case 3:
			display_queue();
			break;
			
		case 4:
			exit(0);
			break;			
	}	
	}
	while(1);
}


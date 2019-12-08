#include<stdio.h>
#include<stdlib.h>
	struct linklist
		{
			int data,x;
			struct linklist *next;
		};
			struct linklist *start=NULL,*newnode,*temp;
		
	void insert_begining(int x)
		{
			newnode=(struct linklist*)malloc (sizeof(struct linklist));
				newnode->data=x;
			newnode->next=NULL;
		if(start==NULL)
			{
				start=newnode;
			}
		else
			{
				newnode->next=start;
				start=newnode;
			}		
		}
	void insert_end(int n)
		{
			newnode=(struct linklist*)malloc (sizeof(struct linklist));
				newnode->data=n;
					newnode->next=NULL;
		if(start==NULL)
			{
				start=newnode;
			}
		else
			{
				for(temp=start;temp->next!=NULL;temp=temp->next);
					temp->next=newnode;
			}	
		}
	void display_struct()
		{
			for(temp=start;temp!=NULL;temp=temp->next)
			{	
				printf("%d\t",temp->data);
			
			}	printf("\n");
		}
	void main()
	{
		int i,v,choice,val;
		do
			{
				printf("1. Insert in Begin:\n2. Insert in End:\n3. Display :\n5. Exit\n");
				printf("Enter Your Choice : \n");
				scanf("%d",&choice);
			
			switch(choice)
				{
					case 1:
						printf("Enter value : \n");
						scanf("%d",&val);
						insert_begining(val);
					break;
					
					case 2:
						printf("Enter value : \n");
						scanf("%d",&v);
						insert_end(v);
					break;
			
					case 3:
						display_struct();
					break;
			
					case 4:
						exit(0);
					break;				
				}	
			}
		while(1);
	}


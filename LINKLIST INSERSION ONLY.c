#include<stdio.h>
#include<stdlib.h>

	struct linklist
		{
			int data;
			struct linklist *next;
		};
			struct linklist *start=NULL,*new_node,*temp;
		
	void insert_begining(int x)
		{
			new_node=(struct linklist*)malloc (sizeof(struct linklist));
				new_node->data=x;
			new_node->next=NULL;
		if(start==NULL)
			{
				start=new_node;
			}
		else
			{
				new_node->next=start;
				start=new_node;
			}		
		}
	void insert_end(int n)
		{
			new_node=(struct linklist*)malloc (sizeof(struct linklist));
				new_node->data=n;
					new_node->next=NULL;
		if(start==NULL)
			{
				start=new_node;
			}
		else
			{
				for(temp=start;temp->next!=NULL;temp=temp->next);
					temp->next=new_node;
			}	
	void display_struct()
		{
			for(temp=start;temp!=NULL;temp=temp->next)
		{
			printf("%d",temp->data);
		}
		}
	}
	void main()
	{
		int i,v,choice,val;
		do
			{
				printf("1. Insert in Begin:\n2. Insert in End:\n3. Remove :\n4.Display :\n5. Exit");
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

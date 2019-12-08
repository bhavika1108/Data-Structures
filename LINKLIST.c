#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
	struct linklist
		{
			int data,p;
			struct linklist *next;
		};
			struct linklist *start=NULL,*newnode,*temp,*temp1;
		
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
	void insert_mid(int x, int p)
		{
			newnode=(struct linklist*)malloc (sizeof(struct linklist));
				newnode->data=x;
					newnode->next=NULL;
			
			for(temp=start;temp->data!=p;temp=temp->next);
			newnode->next=temp->next;
			temp->next=newnode;
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
	void remove_begin()
		{
			temp=start;
			start=start->next;
			free(temp);
		}
	void remove_mid()
		{
			for(temp=start;temp->next->next!=NULL;temp=temp->next);
			temp1=temp->next;
			temp->next=NULL;
			free(temp1);
		}	
	void remove_end()
		{
			int p;
			for(temp=start;temp->next->data!=p;temp=temp->next);
			temp=temp->next;
			temp->next=temp1->next;
			free(temp1);
		}	
	
	void display_struct()
		{
			for(temp=start;temp!=NULL;temp=temp->next)
		{
			printf("%d\t",temp->data);
		}
			printf("\n");
		}
	
	void main()
	{
		int i,v,choice,val,mid,end,p,pre;
		do
			{
				printf("1. Insert in Begin:\n2. Insert in Mid :\n3. Insert in End:\n");
				printf("4. Remove from Begin:\n5. Remove from MIDDLE :\n6. Remove from END:\n");
				printf("7. Display :\n8. Exit :\n");
				printf("Enter Your Choice :");
				scanf("%d",&choice);
			
			switch(choice)
				{
					case 1:
						printf("Enter value : \n");
						scanf("%d",&val);
						insert_begining(val);
					break;
					
					case 2:
						printf("Enter the value to insert in mid :");
						scanf("%d",&mid);
						printf("Enter previous node: \n");
						scanf("%d",&p);
						
						insert_mid(mid,p);
					break;
			
					case 3:
						printf("Enter the value to insert in end :");
						scanf("%d",&end);
						insert_end(end);
					break;
			
					case 4:
						remove_begin();
					break;			
					
					case 5:
							remove_end();
					break;
					
					case 6:
						remove_mid();
					break;
					
					case 7:
						display_struct();
					break;
					case 8:
						exit(0);
					break;				
				}	
			}
		while(1);
	}

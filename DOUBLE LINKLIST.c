#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<malloc.h>
	struct doublelinklist
		{
			int data,p;
			struct doublelinklist *next,*prev;
		};
			struct doublelinklist *start=NULL,*end=NULL,*newnode,*temp,*temp1;
		
	void insert_begin(int x)
		{
			newnode=(struct doublelinklist*)malloc(sizeof(struct doublelinklist));
				newnode->data=x;
				newnode->next=NULL;
				newnode->prev=NULL;
			if(start==NULL)
				{
					start=newnode;
				
					end=newnode;
				}
			else
				{
					newnode->next=start;
					start->prev=newnode;
					start=newnode;
				}
		}
	void insert_end(int n)
		{
				newnode=(struct doublelinklist*)malloc(sizeof(struct doublelinklist));
					newnode->data=n;
				newnode->next=NULL;
				newnode->prev=NULL;
			if(start==NULL)
				{
					start=newnode;
					end=newnode;
				}
			else
			{
				end->next=newnode;
				newnode->prev=end;
				end=newnode;
			}	
		}
	void insert_mid()
		{
			int p;
			
				newnode=(struct doublelinklist*)malloc(sizeof(struct doublelinklist));
					newnode->data=p;
				newnode->next=NULL;
				newnode->prev=NULL;
			if(start==NULL)
				{
					start=newnode;
					end=newnode;
				}
			else
				{
					for(temp=start;temp->data!=p;temp=temp->next);
					temp1=temp->next;
					temp->prev=newnode;
					newnode->prev=temp1;
					temp->next=newnode;
					newnode->prev=temp;
				}	
		}
		void display_list()
		{
			for(temp1=start;temp1!=NULL;temp1=temp1->next)
		{
			printf("%d\t",temp1->data);
		}
			printf("\n");
		}
		
		void main()
			{
				int choice,beg,mid,endd;
				
				do{
						printf("1. Insert in Begin:\n2. Insert in Mid :\n3. Insert in End:\n");
						printf("4. Display :\n5. Exit :\n");
						printf("Enter your choice :");
						
						scanf("%d",&choice);
							
					switch(choice)
					{
						case 1:
							printf("Enter the value :");
							scanf("%d",&beg);
								insert_begin(beg);	
						break;
						
						case 2:
							printf("Enter the value :");
							scanf("%d",&mid);
								insert_mid(mid);
						break;
						
						case 3:
							printf("Enter the value :");
							scanf("%d",&endd);
								insert_end(endd);
						break;
						
						case 4:	
							display_list();
						break;
						
						case 5:
							exit(0);
						break;							
					 } 	
				}
				while(1);
				}

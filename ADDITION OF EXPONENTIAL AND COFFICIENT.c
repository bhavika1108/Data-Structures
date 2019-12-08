#include<stdio.h>
#include<malloc.h>
#include<process.h>

struct node
{
	int coffi,expo,data;
	struct node *next,*pre;
};
struct node *start1=NULL,*start2=NULL,*start3=NULL;
struct node *newnode1,*newnode2,*newnode3;
struct node *temp1,*temp2,*temp3;

void insert_end_first(int x, int y)
{
	newnode1=(struct node*)malloc(sizeof(struct node));
	
			newnode1->coffi=x;
			newnode1->expo=y;
			newnode1->next=NULL;

		
		if(start1==NULL)
			{
				start1=newnode1;
			}
		else
			{
				for(temp1=start1;temp1->next!=NULL;temp1=temp1->next);
					temp1->next=newnode1;
			}
}
void insert_end_second(int x, int y)
{
	newnode2=(struct node*)malloc(sizeof(struct node));
	
			newnode2->coffi=x;
			newnode2->expo=y;
			newnode2->next=NULL;

		if(start2==NULL)
			{
				start2=newnode2;
			}
		else
			{
				for(temp2=start2;temp2->next!=NULL;temp2=temp2->next);
				temp2->next=newnode2;
			}	
}
void insert_end_third(int x, int y)
{
	newnode3=(struct node*)malloc(sizeof(struct node));
	
			newnode3->coffi=x;
			newnode3->expo=y;
			newnode3->next=NULL;

		if(start3==NULL)
			{
				start3=newnode3;
			}
		else
			{
				for(temp3=start3;temp3->next!=NULL;temp3=temp3->next);
				temp3->next=newnode3;
			}	
}
void polynomial_add()
{
	
	for(temp1=start1,temp2=start2;temp1!=NULL && temp2!=NULL;)
		{
			if(temp1->expo>temp2->expo)
				{
					insert_end_third(temp1->coffi,temp1->expo);
						temp1=temp1->next;
				}
			else
				if(temp2->expo>temp1->expo)
				{
					insert_end_third(temp2->coffi,temp2->expo);
						temp2=temp2->next;
				}
			else
				{
					insert_end_third(temp1->coffi+temp2->coffi,temp1->expo);
						temp1=temp1->next;
						temp2=temp2->next;
				}		
		}
	
	while(temp1!=NULL)
		{
			insert_end_third(temp1->coffi,temp1->expo);
			temp1=temp1->next;
			}	
	while(temp2!=NULL)
		{
			insert_end_third(temp2->coffi,temp2->expo);
			temp2=temp2->next;
			}			
}
void display_first()
{
	for(temp1=start1;temp1!=NULL;temp1=temp1->next)
		{
			printf("%d\n",temp1->coffi);
			printf("%d\n",temp1->expo);
			printf("\n");
		}
}
void display_second()
{
	for(temp2=start2;temp2!=NULL;temp2=temp2->next)
		{
			printf("%d\n",temp2->coffi);
			printf("%d\n",temp2->expo);
			printf("\n");
		}
}
void display_final()
{
	for(temp3=start3;temp3!=NULL;temp3=temp3->next)
		{
			printf("%d\n",temp3->coffi);
			printf("%d\n",temp3->expo);
			printf("\n");
		}
}

int main()
{
	int choice,x,y;
	int a,b;
	do{
		printf("1. Insert first :\n2. insert second\n");
		printf("3. Display first :\n4. Display second :\n5. Display Final Result :\n");
		printf("6. Addition :\n7. Exit :\n");
		scanf("%d",&choice);
		printf("\n");
		
		switch(choice)
			{
				case 1:
						printf("Enter Cofficient :");
						scanf("%d",&x);
						printf("Enter Exponent :");
						scanf("%d",&y);
						insert_end_first(x,y);
						printf("\n");
						break;
				
				case 2:
						printf("Enter Cofficient :");
						scanf("%d",&a);
						printf("Enter Exponent :");
						scanf("%d",&b);
						insert_end_second(a,b);
						printf("\n");
						break;	
				
				case 3:
						display_first();
						
						break;	
				
				case 4:
						display_second();
						break;	
						
				case 5:
						display_final();
						break;	
						
				case 6:
						polynomial_add();
						break;
						
				case 7:
						exit(0);
						break;										
			}
	}	
	while(1);
}

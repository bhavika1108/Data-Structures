#include<stdio.h>
#include<process.h>
#include<string.h>
#define size 100

char expr[20];
char stack[size];
char r,z,k=0;
int top=-1;

void push(char x)
{
	if(top==size-1)
	printf("Over flow");
	else
	{
		top++;
		stack[top]=x;
	}
}
char pop()
{
	if(top==-1)
	printf("Under Flow");
	else
	{
		r=stack[top];
		top--;
	}
	return r;
}
void main()
{
	int i,l;
	printf("Enter Expressions\n");
	gets(expr);
	l=strlen(expr);

	for(i=0;i<l;i++)
	{
		if(expr[i]=='{'||expr[i]=='('||expr[i]=='[')
		push(expr[i]);
		
		else
		r=pop();
		
		if(expr[i]==']'&& r!='[')
		{
			printf("Invalid");
			break;
		}
		else
		if(expr[i]=='}'&& r!='{')
		{
			printf("Invalid");
			break;
		}
		else
		if(expr[i]==')'&& r!='(')
		{
			printf("Invalid");
			break;
		}
	}
	if(i==l)
	printf("Valid");
}

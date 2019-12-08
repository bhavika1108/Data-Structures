#include<stdio.h>
#include<math.h>
#include<process.h>
#include<string.h>
#define size 100

char postfix[20],stack[100],infix[20];
char r,z,k=0;
int top=-1;

void push(char x)
{
	if(top==size-1)
	printf("over_flow");
	else
	{
		top++;
		stack[top]=x;
	}
}
char pop()
{
	if(top==-1)
	printf("under_flow");
	else
	{
		r=stack[top];
		top--;
	}
	return r;
}
int prior (char y)
{
	int p;
	if(y=='^')
	p=3;
	else
	if(y=='*'||y=='/')
	p=2;
	else
	p=1;
	
	return p;
}

int main()
{
	int i,l;
	int p1,p2;
	
	printf("Enter infix_Expressions\n");
	gets(infix);
	push('(');
	strcat(infix,")");
	l=strlen(infix);
	
	for(i=0;i<l;i++)
	{
		if(infix[i]=='(')
		push('(');
		else
		if(infix[i]=='+'||infix[i]=='-'||infix[i]=='/'||infix[i]=='*'||infix[i]=='^')
		{
			if(stack[top]=='(')
			push(infix[i]);
		else
		{
			p1=prior(infix[i]);
			p2=prior(stack[top]);
			
			if(p2>=p1)
			{
				z=pop();
				postfix[k]=z;
				k++;
			}
			else
			push(infix[i]);
		}	
		}
		else
		if(infix[i]==')')
		{
			while(stack[top]!='(')
			{
				z=pop();
				postfix[k]=z;
				k++;
			}
			z=pop();
		}
		else
		{
			postfix[k]=infix[i];
			k++;
		}
	}
	postfix[k]=NULL;
	puts(postfix);
}

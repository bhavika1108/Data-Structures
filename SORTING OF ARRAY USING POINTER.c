#include<stdio.h>
#include<process.h>
int main()
{
	int a[10],*ptr1,*ptr2,t,i;
	printf("Enter array : ");
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(ptr1=a;ptr1<=a+9;ptr1++)
	{
		for(ptr2=ptr1+1;ptr2<=a+9;ptr2++)
		{
			if(*ptr1>*ptr2)
			{
				t=*ptr1;
				*ptr1=*ptr2;
				*ptr2=t;
			}
		}
	}
	printf("After sorting\n");
	for(i=0;i<9;i++)
	{
		printf("%d\n",a[i]);
	}}

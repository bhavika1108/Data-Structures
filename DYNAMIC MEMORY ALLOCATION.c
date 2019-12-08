#include<stdio.h>
#include<string.h>
#include<process.h>

int main()
{

int n[10],i;
int *p,size;

printf("Enter size of array : \n");
scanf("%d",&size);

p=(int*)malloc(size*sizeof(int));

printf("Enter Array : \n");
for(i=0;i<size;i++)
{
	scanf("%d",p+i);
}
for(i=0;i<size;i++)
{
	printf("%d",*(p+i));
}
}

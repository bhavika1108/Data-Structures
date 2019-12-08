#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
struct linklist
{
int data,x;
struct linklist *next;
};
struct linklist *start=NULL,*newnode,*temp;

void insert_begining(int x)
{
newnode=(struct linklist*)malloc (sizeof(struct linklist));
newnode-&gt;data=x;
newnode-&gt;next=NULL;

if(start==NULL)
{
start=newnode;
}
else
{
newnode-&gt;next=start;
start=newnode;
}
}
void insert_end(int n)
{
newnode=(struct linklist*)malloc (sizeof(struct linklist));
newnode-&gt;data=n;
newnode-&gt;next=NULL;

if(start==NULL)
{
start=newnode;
}
else
{
for(temp=start;temp-&gt;next!=NULL;temp=temp-&gt;next);
temp-&gt;next=newnode;

}
}
void display_struct()
{
for(temp=start;temp!=NULL;temp=temp-&gt;next)
{
printf(&quot;%d\t&quot;,temp-&gt;data);
} printf(&quot;\n&quot;);
}
void main()
{
int i,v,choice,val;
do
{
printf(&quot;1. Insert in Begin:\n2. Insert in End:\n3. Display

:\n5. Exit\n&quot;);

printf(&quot;Enter Your Choice : \n&quot;);

scanf(&quot;%d&quot;,&amp;choice);
switch(choice)
{
case 1:
printf(&quot;Enter value : \n&quot;);
scanf(&quot;%d&quot;,&amp;val);
insert_begining(val);
break;
case 2:
printf(&quot;Enter value : \n&quot;);
scanf(&quot;%d&quot;,&amp;v);
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

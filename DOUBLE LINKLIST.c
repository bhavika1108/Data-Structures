#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
#include&lt;process.h&gt;
#include&lt;malloc.h&gt;
struct doublelinklist
{
int data,p;
struct doublelinklist *next,*prev;
};
struct doublelinklist *start=NULL,*end=NULL,*newnode,*temp,*temp1;

void insert_begin(int x)
{
newnode=(struct doublelinklist*)malloc(sizeof(struct doublelinklist));
newnode-&gt;data=x;
newnode-&gt;next=NULL;
newnode-&gt;prev=NULL;
if(start==NULL)
{
start=newnode;
end=newnode;
}
else
{
newnode-&gt;next=start;
start-&gt;prev=newnode;
start=newnode;
}

}
void insert_end(int n)
{

newnode=(struct doublelinklist*)malloc(sizeof(struct doublelinklist));
newnode-&gt;data=n;

newnode-&gt;next=NULL;
newnode-&gt;prev=NULL;
if(start==NULL)
{
start=newnode;
end=newnode;
}
else
{
end-&gt;next=newnode;
newnode-&gt;prev=end;
end=newnode;
}
}
void insert_mid()
{
int p;
newnode=(struct doublelinklist*)malloc(sizeof(struct doublelinklist));
newnode-&gt;data=p;
newnode-&gt;next=NULL;
newnode-&gt;prev=NULL;
if(start==NULL)
{
start=newnode;
end=newnode;
}
else
{
for(temp=start;temp-&gt;data!=p;temp=temp-&gt;next);
temp1=temp-&gt;next;
temp-&gt;prev=newnode;
newnode-&gt;prev=temp1;
temp-&gt;next=newnode;
newnode-&gt;prev=temp;
}

}
void display_list()
{
for(temp1=start;temp1!=NULL;temp1=temp1-&gt;next)
{
printf(&quot;%d\t&quot;,temp1-&gt;data);
}
printf(&quot;\n&quot;);
}
void main()
{
int choice,beg,mid,endd;

do{

printf(&quot;1. Insert in Begin:\n2. Insert in Mid :\n3.

Insert in End:\n&quot;);

printf(&quot;4. Display :\n5. Exit :\n&quot;);
printf(&quot;Enter your choice :&quot;);
scanf(&quot;%d&quot;,&amp;choice);
switch(choice)
{
case 1:
printf(&quot;Enter the value :&quot;);
scanf(&quot;%d&quot;,&amp;beg);
insert_begin(beg);

break;
case 2:
printf(&quot;Enter the value :&quot;);
scanf(&quot;%d&quot;,&amp;mid);
insert_mid(mid);

break;
case 3:
printf(&quot;Enter the value :&quot;);
scanf(&quot;%d&quot;,&amp;endd);
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

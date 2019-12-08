#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
#include&lt;malloc.h&gt;
struct linklist
{
int data,p;
struct linklist *next;
};
struct linklist *start=NULL,*newnode,*temp,*temp1;

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
void insert_mid(int x, int p)
{
newnode=(struct linklist*)malloc (sizeof(struct linklist));
newnode-&gt;data=x;
newnode-&gt;next=NULL;

for(temp=start;temp-&gt;data!=p;temp=temp-&gt;next);
newnode-&gt;next=temp-&gt;next;
temp-&gt;next=newnode;

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
void remove_begin()
{
temp=start;
start=start-&gt;next;
free(temp);
}
void remove_mid()
{
for(temp=start;temp-&gt;next-&gt;next!=NULL;temp=temp-&gt;next);
temp1=temp-&gt;next;
temp-&gt;next=NULL;
free(temp1);
}
void remove_end()
{
int p;
for(temp=start;temp-&gt;next-&gt;data!=p;temp=temp-&gt;next);
temp=temp-&gt;next;
temp-&gt;next=temp1-&gt;next;
free(temp1);
}
void display_struct()
{
for(temp=start;temp!=NULL;temp=temp-&gt;next)

{
printf(&quot;%d\t&quot;,temp-&gt;data);
}
printf(&quot;\n&quot;);
}
void main()
{
int i,v,choice,val,mid,end,p,pre;
do
{
printf(&quot;1. Insert in Begin:\n2. Insert in Mid :\n3. Insert in

End:\n&quot;);

printf(&quot;4. Remove from Begin:\n5. Remove from MIDDLE

:\n6. Remove from END:\n&quot;);

printf(&quot;7. Display :\n8. Exit :\n&quot;);
printf(&quot;Enter Your Choice :&quot;);
scanf(&quot;%d&quot;,&amp;choice);
switch(choice)
{
case 1:
printf(&quot;Enter value : \n&quot;);
scanf(&quot;%d&quot;,&amp;val);
insert_begining(val);
break;
case 2:
printf(&quot;Enter the value to insert in mid :&quot;);
scanf(&quot;%d&quot;,&amp;mid);
printf(&quot;Enter previous node: \n&quot;);
scanf(&quot;%d&quot;,&amp;p);
insert_mid(mid,p);
break;
case 3:
printf(&quot;Enter the value to insert in end :&quot;);
scanf(&quot;%d&quot;,&amp;end);
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

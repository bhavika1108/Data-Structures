#include&lt;stdio.h&gt;
#include&lt;process.h&gt;
#include&lt;string.h&gt;
#define size 100
int queue[size];
int rear=-1;
int front=-1;
int r;

void insert_queue(int x)
{
if(rear==size-1)
printf(&quot;Queue is full...&quot;);
else
if(front==-1)
{
front=0;
rear=0;
queue[rear]=x;
}
else
{
rear++;
queue[rear]=x;
}
}
int remove_queue()
{
if(front==-1 &amp;&amp; rear==-1)
printf(&quot;Empty&quot;);
else
if(front==rear)
{
r=queue[front];
front=rear=-1;
}
else
{
r=queue[front];
front++;
}
return r;
}
void display_queue()
{
int i;
for(i=front;i&lt;=rear;i++)
{
printf(&quot;%d\n&quot;,queue[i]);
}
}
void main()
{
int choice;
int v,x;

do
{
printf(&quot;Enter 1 for insert\n&quot;);
printf(&quot;2. delete\n&quot;);
printf(&quot;3. display\n&quot;);
printf(&quot;4. Exit\n&quot;);
printf(&quot;Enter Your Choice : &quot;);
scanf(&quot;%d&quot;,&amp;choice);
switch(choice)
{
case 1:
printf(&quot;Enter Expression to add : &quot;);
scanf(&quot;%d&quot;,&amp;v);
insert_queue(v);
break;
case 2:
v=remove_queue();
printf(&quot;Enter expression to delete %d&quot;,v);
break;
case 3:
display_queue();
break;
case 4:
exit(0);
break;

}
}
while(1);
}

#include&lt;stdio.h&gt;
#include&lt;malloc.h&gt;
#include&lt;process.h&gt;

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

newnode1-&gt;coffi=x;
newnode1-&gt;expo=y;
newnode1-&gt;next=NULL;

if(start1==NULL)
{
start1=newnode1;
}
else

{
for(temp1=start1;temp1-&gt;next!=NULL;temp1=temp1-&gt;next);
temp1-&gt;next=newnode1;

}

}
void insert_end_second(int x, int y)
{
newnode2=(struct node*)malloc(sizeof(struct node));

newnode2-&gt;coffi=x;
newnode2-&gt;expo=y;
newnode2-&gt;next=NULL;

if(start2==NULL)
{
start2=newnode2;
}
else
{
for(temp2=start2;temp2-&gt;next!=NULL;temp2=temp2-&gt;next);
temp2-&gt;next=newnode2;
}

}
void insert_end_third(int x, int y)
{
newnode3=(struct node*)malloc(sizeof(struct node));

newnode3-&gt;coffi=x;
newnode3-&gt;expo=y;
newnode3-&gt;next=NULL;

if(start3==NULL)
{
start3=newnode3;
}
else
{
for(temp3=start3;temp3-&gt;next!=NULL;temp3=temp3-&gt;next);
temp3-&gt;next=newnode3;
}

}
void polynomial_add()
{

for(temp1=start1,temp2=start2;temp1!=NULL &amp;&amp; temp2!=NULL;)
{
if(temp1-&gt;expo&gt;temp2-&gt;expo)
{
insert_end_third(temp1-&gt;coffi,temp1-&gt;expo);
temp1=temp1-&gt;next;

}
else
if(temp2-&gt;expo&gt;temp1-&gt;expo)
{
insert_end_third(temp2-&gt;coffi,temp2-&gt;expo);
temp2=temp2-&gt;next;

}
else
{
insert_end_third(temp1-&gt;coffi+temp2-&gt;coffi,temp1-&gt;expo);
temp1=temp1-&gt;next;
temp2=temp2-&gt;next;

}

}

while(temp1!=NULL)
{
insert_end_third(temp1-&gt;coffi,temp1-&gt;expo);
temp1=temp1-&gt;next;
}
while(temp2!=NULL)
{
insert_end_third(temp2-&gt;coffi,temp2-&gt;expo);
temp2=temp2-&gt;next;
}

}
void display_first()
{
for(temp1=start1;temp1!=NULL;temp1=temp1-&gt;next)
{
printf(&quot;%d\n&quot;,temp1-&gt;coffi);
printf(&quot;%d\n&quot;,temp1-&gt;expo);
printf(&quot;\n&quot;);
}

}
void display_second()
{
for(temp2=start2;temp2!=NULL;temp2=temp2-&gt;next)
{
printf(&quot;%d\n&quot;,temp2-&gt;coffi);
printf(&quot;%d\n&quot;,temp2-&gt;expo);
printf(&quot;\n&quot;);
}

}
void display_final()
{
for(temp3=start3;temp3!=NULL;temp3=temp3-&gt;next)
{
printf(&quot;%d\n&quot;,temp3-&gt;coffi);
printf(&quot;%d\n&quot;,temp3-&gt;expo);
printf(&quot;\n&quot;);
}

}

int main()
{
int choice,x,y;
int a,b;
do{
printf(&quot;1. Insert first :\n2. insert second\n&quot;);
printf(&quot;3. Display first :\n4. Display second :\n5. Display Final Result :\n&quot;);
printf(&quot;6. Addition :\n7. Exit :\n&quot;);
scanf(&quot;%d&quot;,&amp;choice);
printf(&quot;\n&quot;);

switch(choice)
{
case 1:

printf(&quot;Enter Cofficient :&quot;);
scanf(&quot;%d&quot;,&amp;x);
printf(&quot;Enter Exponent :&quot;);
scanf(&quot;%d&quot;,&amp;y);
insert_end_first(x,y);
printf(&quot;\n&quot;);

break;

case 2:

printf(&quot;Enter Cofficient :&quot;);
scanf(&quot;%d&quot;,&amp;a);
printf(&quot;Enter Exponent :&quot;);
scanf(&quot;%d&quot;,&amp;b);
insert_end_second(a,b);
printf(&quot;\n&quot;);
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

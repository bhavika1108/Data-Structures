#include&lt;stdio.h&gt;
#include&lt;math.h&gt;
#include&lt;process.h&gt;
#include&lt;string.h&gt;
#define size 100
char postfix[20],stack[100],infix[20];
char r,z,k=0;
int top=-1;
void push(char x)
{
if(top==size-1)
printf(&quot;over_flow&quot;);
else

{
top++;
stack[top]=x;
}
}
char pop()
{
if(top==-1)
printf(&quot;under_flow&quot;);
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
if(y==&#39;^&#39;)
p=3;
else
if(y==&#39;*&#39;||y==&#39;/&#39;)
p=2;
else
p=1;
return p;
}
int main()
{
int i,l;
int p1,p2;
printf(&quot;Enter infix_Expressions\n&quot;);
gets(infix);
push(&#39;(&#39;);
strcat(infix,&quot;)&quot;);
l=strlen(infix);

for(i=0;i&lt;l;i++)
{
if(infix[i]==&#39;(&#39;)
push(&#39;(&#39;);
else
if(infix[i]==&#39;+&#39;||infix[i]==&#39;-&#39;||infix[i]==&#39;/&#39;||infix[i]==&#39;*&#39;||infix[i]==&#39;^&#39;)
{
if(stack[top]==&#39;(&#39;)
push(infix[i]);
else
{
p1=prior(infix[i]);
p2=prior(stack[top]);
if(p2&gt;=p1)
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
if(infix[i]==&#39;)&#39;)
{
while(stack[top]!=&#39;(&#39;)
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

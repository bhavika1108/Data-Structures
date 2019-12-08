#include&lt;stdio.h&gt;
#include&lt;string.h&gt;
#include&lt;process.h&gt;

int main()
{
int n[10],i;
int *p,size;
printf(&quot;Enter size of array : \n&quot;);
scanf(&quot;%d&quot;,&amp;size);
p=(int*)malloc(size*sizeof(int));
printf(&quot;Enter Array : \n&quot;);
for(i=0;i&lt;size;i++)
{
scanf(&quot;%d&quot;,p+i);
}
for(i=0;i&lt;size;i++)
{
printf(&quot;%d&quot;,*(p+i));
}
}

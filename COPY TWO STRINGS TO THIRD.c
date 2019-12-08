#include&lt;stdio.h&gt;
#include&lt;process.h&gt;
#include&lt;string.h&gt;
int main()
{
char s1[10],s2[10],s3[20],i;
char *ps1,*ps2,*ps3,l1,l2;

printf(&quot;Enter first string : &quot;);
gets(s1);
printf(&quot;Enter second string : &quot;);
gets(s2);

l1=strlen(s1);
l2=strlen(s2);

for(ps1=s1,ps3=s3;ps1&lt;s1+l1;ps1++,ps3++)
{
*ps3=*ps1;
}
for(ps2=s2;ps2&lt;=s2+l2-1;ps2++,ps3++)

{
*ps3=*ps2;
}

puts(s3);

}

#include<stdio.h>
int main()
{
 int a;
 scanf("%d ", &a);
int s;
if(a%5==0)
{
   s= a/5 ;
}
else
{
   s = (a/5)+1;
}
printf("%d" , s);

return 0;
}


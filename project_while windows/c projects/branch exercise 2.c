#include<stdio.h>
int main()

{
   int x, y, z;
   printf("Enter three inputs :\n");
   scanf("%d %d %d",&x,&y,&z);

   if (x>=y && x>=z)
   {
       printf("%d IS LARGE NUMBER",x);
   }
   if (y>=x && y>=z)
   {
       printf("%d IS LARGE NUMBER",y);
   }
   if (z>=y && y>=x)
   {
       printf("%d IS LARGE NUMBER",z);
   }
    return 0;
}

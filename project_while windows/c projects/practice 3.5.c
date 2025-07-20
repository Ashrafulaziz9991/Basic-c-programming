#include<stdio.h>

int main()

{
   int x, y;
   printf("Enter two inputs");
   scanf("%d%d",&x,&y);

   if (x>y)
   {
       printf("%d; x is large number");
   }

   else if (x<y)
   {
       printf("%d; y in a large number");
   }

   else
   {
       printf("They are equal numbers");
   }

    return 0;
}

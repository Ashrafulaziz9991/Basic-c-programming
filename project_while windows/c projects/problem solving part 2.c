#include<stdio.h>
int main()
{
   int a;
   printf("Enter the digit");
   scanf("%d", &a);

   if (a%2==0)

   {
       printf("Possible\n.");
   }
   else
   {
       printf("Impossibe");
   }

   return 0;
}

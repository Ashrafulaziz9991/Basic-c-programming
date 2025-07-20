#include<stdio.h>
int main()
{
  int a, b;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
    if(a==0 || b==0)
    {
        printf("They are not divisible by each other");
        return;
    }

    if(a%b==0)
    {
        printf("The first number is divisible by the second number.");
    }
    else if(b%a==0)
    {
        printf("The second number is divisible by the first number.");
    }

    else
    {
        printf("None of them are divisible by the other.");
    }
    return 0;
}

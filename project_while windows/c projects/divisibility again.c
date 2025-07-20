#include<stdio.h>
int main()
{
  int first_number, second_number;
  printf("Enter first number: ");
  scanf("%d",&first_number);
  printf("Enter second number: ");
  scanf("%d",&second_number);
    if(first_number==0 || second_number==0)
    {
        printf("They are not divisible by each other");
        return;
    }

    if(first_number%second_number==0)
    {
        printf("%d is divisible by %d",first_number, second_number);
    }
    else if(second_number%first_number==0)
    {
        printf("%d is divisible by %d",second_number,first_number);
    }

    else
    {
        printf("They are not divisible by each other");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    long long int number, i=0;
    printf("Enter the integer :");
    scanf("%lld",&number);

    while(number!=0)
    {
        number=number/10;
        i++;
    }
    printf(" %lld  digits\n", i);

    return 0;
}

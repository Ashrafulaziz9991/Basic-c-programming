#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any integer");
    scanf("%d%d", &a,&b);

    if(a%b==0)
    {
        printf("a is divisible by b", %d is divisible by %d);
    }
    else if(b%a==0)
    {
        printf("b is divisible by a", %d is divisible by %d);
    }
    else
    {
        printf("They are not divisible by each other");
    }
    return 0;
}


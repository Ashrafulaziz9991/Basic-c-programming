#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==0 || b==0)
    {
        printf("They are not divisible by each other");
        return;
    }

    if(a%b==0)
    {
        printf("%d is divisible by %d",a, b);
    }
    else if(b%a==0)
    {
        printf("%d is divisible by %d",b,a);
    }

    else
    {
        printf("They are not divisible by each other");
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    if(a%b==0)
    {
        printf("%d  divisible by %d",a,b);
    }
    else if(b%a==0)
    {
        printf("%d  divisible by %d",b,a);
    }
    else
    {
        printf("they are not divisible by each other");
    }
    return 0;
}

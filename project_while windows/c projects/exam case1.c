#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b && a>c && a>d && c>b && d>b)
    {
        printf("a is large, b is small");
    }
    if(a>c && a>d && a>b && c<b && c<d)
    {
        printf("a is large, c is small");
    }
    if(a>d && a>c && a>b && c>b && d>b)
    {
        printf("a is large, d is small");
    }
    if(b>a && b>c && b<d && c>a && d>a)
    {
        printf("b is large, a is small");
    }
    if(b>c && b>d && a<d && c>a && d>a)
    {
        printf("b is large, a is small");
    }
    if(b>d && a<b && c<b && c>b && d>b)
    {
        printf("a is large, b is small");
    }
    if(a>b && a>c && a>d && c>b && d>b)
    {
        printf("a is large, b is small");
    }
    if(a>b && a>c && a>d && c>b && d>b)
    {
        printf("a is large, b is small");
    }
    else
    {
        printf("%d %d b is large a is small");
    }

    return 0;
}

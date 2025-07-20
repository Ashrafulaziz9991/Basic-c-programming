#include<stdio.h>
int main()
{
    int x,a,b,s;
    scanf("%d%d%d%d", &x,&a,&b,&s);

    if (x%2==0)
    {
        printf("s=a+b");
    }
    else
    {
        printf("s=a-b");
    }
    return 0;

}

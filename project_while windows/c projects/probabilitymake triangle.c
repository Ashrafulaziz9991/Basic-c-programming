#include<stdio.h>
int main()
{

   int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a=b)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    if (b=c)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    if (a=c)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}


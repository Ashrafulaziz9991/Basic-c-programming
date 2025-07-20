#include<stdio.h>
#include <stdlib.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    if(t>0)
    {
        for (i = t; i>= -t ; i--)
        {
            printf("%d ",i);
        }
    }
    else
    {
        t = abs(t);
        for (i = -t; i <= t; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}


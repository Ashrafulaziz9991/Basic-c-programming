#include<stdio.h>
#include <stdlib.h>
int pos_neg(int t)
{
    if(t>0)
    {
        for (int i = t; i>= -t ; i--)
        {
            printf("%d ",i);
        }
    }
    else
    {
        t= abs(t);
        for (int i = -t; i < t; i++)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    int result = pos_neg(t);
    printf("%d", result);

    return 0;
}



#include<stdio.h>
int main()
{
    int i,n;
    int ara[120];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int max=ara[0];
    for(i=0;i<n;i++)
    {
        if(ara[i]>max)
        {
            max = ara[i];
        }
    }
    int rm = ara[0];
    for(i=0;i<n;i++)
    {
        rm=max-ara[i];
    }
     for(i=0;i<n;i++)
     {
         rm=max-ara[i];

        printf("%d ",rm);
     }
    return 0;
}


#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int ara[n];
    printf("Enter the integers:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int max=ara[0];
    for(i=1;i<=n;i++)
    {
        if(ara[i]>max)
        {
            max = ara[i];
        }
        else
        {
          //Do nothing.
        }
    }
    printf("The maximum value is %d\n",max);
    return 0;
}


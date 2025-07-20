#include<stdio.h>
int main()
{
    int i,n=7;
    int ara[n];
    printf("Enter the integers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int min=ara[0];
    for(i=0;i<n;i++)
    {
        if(ara[i]<min)
        {
            min = ara[i];
        }
        else
        {
          //Do nothing.
        }
    }
    printf("The minimum value is %d\n",min);
    return 0;
}


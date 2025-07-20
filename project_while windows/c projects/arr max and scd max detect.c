#include<stdio.h>
int main()
{
    int i,n=7;
    int ara[n];
    printf("Enter the integers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int max=ara[1];
    int scd_max=ara[0];
    for(i=0;i<n;i++)
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
    for(i=0;i<n;i++)
        if(max>scd_max && ara[i]<scd_max)
        {
            scd_max = ara[i];
        }
        else
        {
          //Do nothing.
        }
     printf("The maximum value is %d\n",max);
     printf("The second maximum value is %d\n",scd_max);
    return 0;
}


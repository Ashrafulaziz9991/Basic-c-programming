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
    for(i=0;i<n;i++)
    {
        printf("%d'th' position  %d\n",i,ara[i]);
    }

    return 0;
}

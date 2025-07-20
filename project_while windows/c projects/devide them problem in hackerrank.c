#include<stdio.h>
int main()
{
    int n,i,k,ara[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    //scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        printf("%d 'th position %d'\n",i,ara[i]);
    }

 return 0;
}

#include<stdio.h>
int main()
{
    int n,x;
    int ara[200001];
    int i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d\n",&ara[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d th position %d\n",i,ara[i]);
    }
    return 0;
}

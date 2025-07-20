#include<stdio.h>
int main()
{
    int N,K,i;
    int ara[2000];
    int x;
    scanf("%d,%d",&N,&K);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=1;i<=N;i++)
    {
        if(ara[i]<K)
        {
            ara[i]+=x;
            x++;
        }
    }
    printf("%d\n",x);
    return 0;
}

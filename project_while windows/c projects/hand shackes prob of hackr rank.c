#include<stdio.h>
int main()
{
    int N,i,j,fact=1,k,comb;
    scanf("%d%d",&N,&k);
    for(i=1;i<=N;i++)
    {
        fact=fact*i;
    }
    for(j=1;j<=N;j++)
    {
        k=k*j;
    }
    comb=

    printf("%d\n",fact);
    printf("%d",k);

   //int comb=0;

   //printf("%d",comb);
   return 0;
}

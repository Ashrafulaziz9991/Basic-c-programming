#include<stdio.h>
int main()
{
    int N,m;
    scanf("%d",&N);
    m=N%3;
    if(m!=0)
    {
         printf("-1");
    }
    if(m==0)
        printf("%d", N/3);

    return 0;
}

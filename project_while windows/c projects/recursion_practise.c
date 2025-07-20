#include<stdio.h>
#include<stdlib.h>

void series(int n)
{
    if(n==0)
        return;
        printf("%d\n",&n);
    series(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    series(n);
    return 0;
}

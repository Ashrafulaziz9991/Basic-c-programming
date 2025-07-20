#include<stdio.h>
int main()
{
    int n,N;
    scanf("%d",&n);
    N=n%2;
    if(N==0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}

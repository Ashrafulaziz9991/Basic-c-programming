#include<stdio.h>
int main()
{

    int n,w,i;
    int sum=0;
    printf("Enter the number of Passengers:");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        scanf("%d",&w);
        sum+=w;
        i++;
    }
    printf("Total sum of weights %d", sum);

    return 0;
}

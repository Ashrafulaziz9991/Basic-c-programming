#include<stdio.h>
int main()
{
    int n;
    printf("Enter the positive integers :");
    scanf("%d",&n);
    while(n!=1)
    {
        printf("%d ",n);
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=((n*3)+1)/2;
        }
    }
    printf("%d",n);
    return 0;
}

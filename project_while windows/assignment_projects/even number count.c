#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n%2==0)
    {
        for (int i=2; i<=n ;i+=2 )
        {
            printf("%d ",i);
        }
    }
    else
    {
        for (int i=2; i<n ;i+=2 )
        {
            printf("%d ",i);
        }
    }
    return 0;
}

#include<stdio.h>

int is_prime(int n);

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    for(int i=n1;i<=n2;i++)
    {
        if(is_prime(i))
            printf("%d ",i);
    }

    return 0;
}

int is_prime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

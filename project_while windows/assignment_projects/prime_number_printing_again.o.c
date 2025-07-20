#include<stdio.h>
int is_prime(int n);
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int L, R;
        scanf("%d %d", &L, &R);
        for(int i=L; i<=R; i++)
        {
            if(is_prime(i))
                printf("%d ",i);

        }
        printf("\n");
    }
    return 0;
}

int is_prime(int n)
{
    int i=2;
    while(i*i<=n)
    {
        if(n%i==0)
            return 0;
        i++;
    }
    return 1;
}


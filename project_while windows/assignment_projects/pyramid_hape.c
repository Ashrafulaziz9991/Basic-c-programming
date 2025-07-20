#include<stdio.h>
int main()
{
    int n, i, j, k, l;
    scanf("%d", &n);
    k=n;
    for (i = n; i > 0 ; i--)
    {
        for (j = i; j > 0; j--)
        {
            printf(" ");
        }
        for (j = 0; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");

    }

    return 0;
}

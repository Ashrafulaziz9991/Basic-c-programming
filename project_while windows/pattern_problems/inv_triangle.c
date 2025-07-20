#include<stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for (i = 1; i <= n ; i++ )
    {
        for (j = 1; j <= i  ; j++)
        {
            printf(".");
        }
        printf("\n");

        for (k = n ;k>=1 ;k--)
        {
            for (int h = k ; h>=1 ; h--)
            {
                printf("*");
            }
            printf("\n");
        }

    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    /*    for (i=1; i<=n ;i++)
        {
            for (j=1; j<=i ;j++)
            {
                printf("*");

            }
            printf("\n");
        }
    */
    for (i=1; j=1; i<=n; j<=i; i++; j++)
    {
        printf("*");
        printf("\n");
    }
    return 0;
}


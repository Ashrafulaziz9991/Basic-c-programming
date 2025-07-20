#include<stdio.h>
int main()
{
    int m, n, i, j;
    scanf("%d %d", &m, &n);
    for (i = 1 ; i < m ;i++)
    {
        for (j = 0 ;j < n ;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 0 ; i < m ;i++)
    {
        for (j = 0 ;j < m ;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1 ; i < m ;i++)
    {
        for (j = 0 ;j < n ;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 0 ; i < m ;i++)
    {
        for (j = 0 ;j < m ;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1 ; i < m ;i++)
    {
        for (j = 0 ;j < n ;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

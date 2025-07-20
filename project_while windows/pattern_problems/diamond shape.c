#include<stdio.h>
void main()
{
    int t;
    scanf("%d", &t);
    printf("\n");
    while(t--)
    {
        int m, n, i, j;
        scanf("%d %d", &m, &n);
        for (i=0; i<m ; i++)
        {
            for (j=0; j<i; j++)
            {
                printf("%d ",n);
            }
            printf("\n");
        }
        for (i = m; i > 0 ; i--)
        {
            for (j = i ; j > 0 ; j--)
            {
                printf("%d ",n);
            }
            printf("\n");
        }

        printf("\n");
    }
    return;
}

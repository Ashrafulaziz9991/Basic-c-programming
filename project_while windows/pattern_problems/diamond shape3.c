#include<stdio.h>
int main()
{
    int m, i, j;
    scanf("%d", &m);
    for (i=0; i<m; i++ )
    {
        for (j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i=m; i>0 ; i--)
    {
        for (j=i; j>0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



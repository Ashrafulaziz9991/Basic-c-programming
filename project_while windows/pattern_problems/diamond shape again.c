#include<stdio.h>
int main()
{
    int m, i, j;
    scanf("%d", &m);
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


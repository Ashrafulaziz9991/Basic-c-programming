#include<stdio.h>
int main()
{
    int n, h, i, j, k;
    scanf("%d", &n);

    for (h = 1; h <= n ; h++)
    {
        for (i = n; i > h ; i--)
        {
            printf(" ");
        }

        for (k = 1; k<=2*h-1 ; k++)
        {
            printf("+");
        }
        printf("\n");
    }

    printf("\n");

    for (h = 1; h <= n ; h++)
    {

        for (k = 1; k<h ; k++)
        {
            printf(" ");
        }


        for (i = n; i >= h ; i--)
        {
            printf(" +");
        }
        printf("\n");
    }
    return 0;
}

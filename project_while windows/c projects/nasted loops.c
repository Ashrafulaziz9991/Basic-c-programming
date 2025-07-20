#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    printf("\n");
    for(i=1; i<=n; i++)    //prob 1
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    for(i=1; i<=n; i++)    //prob 2
    {
        for(j=n; j>=i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    for(i=1; i<=n; i++)   //prob 3
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        for(int k = 1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

   for(i=1; i<=n; i++)    //prob 4
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(int k=i; k<=n; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

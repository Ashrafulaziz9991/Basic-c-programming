#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("B  = (%d,%d) ",i,j);
        }
        printf("\n");
    }

    printf("\n");
     for(int m=0;m<4;m++)
    {
        for(int n=0;n<4;n++)
        {
            printf("A = (%d,%d) ",m,n);
        }
        printf("\n");
    }
    return 0;
}

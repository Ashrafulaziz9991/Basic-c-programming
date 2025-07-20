#include<stdio.h>
#include<string.h>
int main()
{
    //int row=10, col=7;
    for(int i=0; i<=9; i++)
    {
        for(int j=0; j<=9; j++)
        {
            printf("(%d,%d) ",i,j);

        }
        printf("\n");
    }
    return 0;
}

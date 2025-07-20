#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    while(i<=7)
    {
        j=1;
        while(j<=i)
        {
            printf("+");
            j++;
        }

        printf("\n");
        i++;
    }
    return 0;
}


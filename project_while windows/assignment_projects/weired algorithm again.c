#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n>=1)
    {
        printf("%d,", n);
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=n*3+1;
        }

    }

    return 0;
}



#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, i, prime=1;
        scanf("%d",&n);

        i=2;
        while(i<n)
        {
            if(n%i==0)
            {
                prime=0;
                break;
            }
            i++;
        }
        if(prime==1)
        {
            printf("Prime\n");
        }
        else
        {
            printf("Composite Number\n");
        }


    }
    return 0;
}

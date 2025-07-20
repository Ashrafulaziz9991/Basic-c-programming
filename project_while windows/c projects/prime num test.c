#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        printf("not composite or prime number");
        return;
    }

    for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }
        }
    if(count==0)
    {
        printf("prime number");
    }
    else
    {
        printf("composite number");
    }

    return 0;
}


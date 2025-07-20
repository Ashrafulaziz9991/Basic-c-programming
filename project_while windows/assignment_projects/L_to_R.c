#include<stdio.h>
int main()
{
    int L, R, i,count=0;
    scanf("%d%d",&L ,&R);

    for(i=L;i<=R;i++)
    {
        if(R%i!=0)
        {
            printf("%d ",R/i);
        }
    }

    return 0;
}

/* if(n==0 || n==1)
    {
        printf("not composite or prime number");
        return;
    }

    if(n==1)
    {
        printf("prime number");
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
*/

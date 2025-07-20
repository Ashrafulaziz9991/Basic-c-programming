#include<stdio.h>
#include<math.h>
int main()
{
    int i, N;
    printf("Enter the number :\n");
    scanf("%d",&N);
    int a[1000];
    for (i=0 ; i<N ; i++ )
    {
        scanf("%d",&a[i]);
    }

    printf("The Even numbers :");

    for (i=0; i<N ; i++)
    {
        if(a[i]>=0)
        {
            if (a[i]%2==0)
            {
                //a[i]+=evens;
                printf("%d ",a[i]);
            }
        }

    }

    printf("\nThe Odd numbers :");

    for (i=0; i<N ; i++)
    {
        if(a[i]>=0)
        {
            if (a[i]%2!=0)
            {
                //a[i]+=evens;
                printf("%d ",a[i]);
            }
        }

    }
    return 0;
}

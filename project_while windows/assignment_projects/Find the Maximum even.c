#include<stdio.h>
int main()
{
    int i,j, N;
    scanf("%d",&N);
    int A[1000];
    for (i=0 ; i<N ; i++ )
    {
        scanf("%d",&A[i]);
    }

    int max=A[0], min=A[0];

    for (i=0; i<N ; i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
        if(A[i]<min)
        {
            min=A[i];
        }
    }

    int O_c=0, E_c=0;

    for (i=0; i<N ; i++)
    {
        if(A[i]%2==0)
        {
            E_c++;
        }
        else
        {
            O_c++;
        }
    }

    printf("Max value is %d\n",max);
    printf("Minimum value is %d\n",min);
    printf("odd value is %d\n",O_c);
    printf("Even value is %d\n",E_c);

    int s=0;
    for (i=0; i<N ; i++)
    {
        s=max+A[i];
        printf("%d ",s);
    }
    printf("%d ",s);


    return 0;
}

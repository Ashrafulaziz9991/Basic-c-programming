#include<stdio.h>
int main()
{
    int i,j,N, even_max=0;
    scanf("%d",&N);
    int A[100];
    for(i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    for (i=0; i<N ; i++)
    {
        //printf("%d \n",A[i]);
        if(A[i]%2==0 && A[i]>even_max)
        {
            even_max=A[i];
        }
    }

    for (i=0; i<N; i++)
    {
        for (j=i+1; j<N ; j++)
        {
            if((A[i]+A[j])%2==0  &&  A[i]+A[j] > even_max)
            {
                even_max= A[i]+A[j];
            }
        }
    }

    printf("%d", even_max);

    return 0;
}

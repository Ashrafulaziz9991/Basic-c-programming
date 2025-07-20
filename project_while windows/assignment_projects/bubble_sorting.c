#include<stdio.h>
int main()
{
    int i,j,N=8,temp;
    int arr[8] = {12, 7, 9, 3, 15, 2, 6, 5};

    for(i=0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }
    for(j=0; j<N; j++)
    {
        for(i=0; i<(N-1); i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        printf("\n");
        for(i=0; i<N; i++)
        {
            printf("%d ", arr[i]);
        }

    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i,j,N=11,temp;
    int arr[11] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};

    for(i=0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }
    for(j=0; j<5; j++)
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

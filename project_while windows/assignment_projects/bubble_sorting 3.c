#include<stdio.h>

int main()

{
    int i,j,n=11,temp;
    scanf("%d", &n);
    int arr[11]; /* = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};*/

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(j=0; j<n; j++)
    {
        for(i=0; i<(n-1); i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        //printf("\n");
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

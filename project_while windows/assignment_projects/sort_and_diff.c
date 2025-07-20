#include<stdio.h>
void ascending_order(int n, int arr[])
{
    int i, j, temp;
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])//ascending order
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void descending_order(int n, int arr[])
{
    int i, j, temp;
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if(arr[i] < arr[j])//descending order
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int A[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    int B[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &B[i]);
    }
    ascending_order(n, A);
    descending_order(n, B);
    for(i=0; i<n; i++)
    {
        //difference between each elements of array
        printf("%d ",A[i]-B[i]);
    }
    return 0;
}



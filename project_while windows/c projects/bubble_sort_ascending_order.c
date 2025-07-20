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
    printf("Enter the elements of 1st array:");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    int B[n];
    printf("Enter the elements of 2nd array:");
    for(i=0; i<n; i++)
    {
        scanf("%d", &B[i]);
    }

    ascending_order(n, A);
    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }

    printf("\n");

    descending_order(n, B);
    for(i=0; i<n; i++)
    {
        printf("%d ",B[i]);
    }
    printf("\nDifference between each elements of both array:");

    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]-B[i]);
    }
    return 0;
}


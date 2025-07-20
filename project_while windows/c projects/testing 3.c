#include<stdio.h>

void descending_order(int n, int arr[])
{
    int i, j, temp;
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
}

int main()
{
    int n, i, j, temp;
    printf("Enter the size of array :");
    scanf("%d", &n);
    printf("\n");
    int arr[n];
    printf("Enter the elements of array :");
    for(i=0;i<n;i++)
    {
       scanf("%d", &arr[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n");
    printf("Sorted array according to ascending order  :");
    for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }

    printf("\n");
    printf("\n");
    printf("Sorted array according to descending order  :");
    descending_order(n, arr);

    return 0;
}

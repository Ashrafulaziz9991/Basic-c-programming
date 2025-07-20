#include<stdio.h>
void assending_order_sort(int n, int arr[])
{
    int i, j, temp;
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(arr[i]>arr[j])
           {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
    }
//    for(i=0;i<n;i++)
//    {
//        printf("%d",arr[i]);
//    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the first Array:");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    assending_order_sort(n, arr[n]);

    /*
    int arrr[n];
    printf("Enter the second Array:");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arrr[i]);
    }

    for(int i=0;i<n;i++)
    {
       printf("%d ", arr[i]-arrr[i]);
    }
    */
    return 0;
}

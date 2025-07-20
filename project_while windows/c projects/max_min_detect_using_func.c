#include<stdio.h>
void find_max_min(int n, int arr[], int* p, int* q)
{
    int i;
    *p = arr[0];
    *q = arr[0];
    for (i= 0; i<n; i++)
    {
        if(arr[i] > *p)
             *p = arr[i];
        if(arr[i] < *q)
            *q = arr[i];
    }
}

int main()
{
    int arr[]={3 ,5, 8, 45, 76, 9, 10};
    int n = 7, maxn, minn;

    find_max_min(n, arr, &maxn, &minn);
    printf("%d  %d", maxn, minn);
    return 0;
}

#include<stdio.h>
int main()
{
    int n, k, j, i;
    scan("%d %d", &n, &k);
    int arr[n];
    for (j=0; j<n ; j++)
    {
        if(n%2==0)
        {
            for (i=2; i<=n; i+=2)
            {
                printf("%d ", arr[i]);
            }
            for (i=1; i<n; i+=2)
            {
                printf("%d ", arr[i]);
            }
        }
        else
        {
            for (i=2; i<n; i+=2)
            {
                printf("%d ", arr[i]);
            }
            for (i=1; i<=n; i+=2)
            {
                printf("%d ", arr[i]);
            }
        }
    }
    return 0;
}

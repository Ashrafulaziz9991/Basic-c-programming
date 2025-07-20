#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxx = arr[0];
    int minn = arr[0];

    for (i = 0; i < n; i++)
    {
        if(arr[i] > maxx)
        {
            maxx = arr[i];

        }
    }
    printf("%d ", maxx);
    return 0;
}

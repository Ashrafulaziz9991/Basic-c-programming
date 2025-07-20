#include <stdio.h>

int main()
{
    int n, max_even = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0 && arr[i] > max_even)
        {
            max_even = arr[i];
        }
    }
//    printf("\n%d",max_even);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((arr[i] + arr[j]) % 2 == 0 && arr[i] + arr[j] > max_even)
            {
                max_even = arr[i] + arr[j];
            }
        }
    }
    printf("%d\n", max_even);
    return 0;
}


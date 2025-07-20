#include <stdio.h>
int main()
{
    int arr[15],i;
    arr[0] = 1;
    for (i = 1; i <= 15; i++)
    {
        arr[i] = arr[i-1] * 2;
    }
    for (i = 0; i < 15; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

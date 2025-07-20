#include <stdio.h>

int main()
{
    int n, k;
    printf("Enter the value of n and k: ");
    scanf("%d %d", &n, &k);

    // Print even numbers
    for (int i = 2; i <= n; i += 2)
    {
        printf("%d ", i);
    }

    // Print odd numbers
    for (int i = 1; i <= n; i += 2)
    {
        printf("%d ", i);
    }

    // Find k-th number
    int kthNumber;
    if (k <= n / 2)
    {
        kthNumber = 2 * k;
    }
    else
    {
        kthNumber = (k - n / 2) * 2 - 1;
    }

    printf("\nThe %dth element in this sequence is %d.\n", k, kthNumber);

    return 0;
}

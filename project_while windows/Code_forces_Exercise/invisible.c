#include <stdio.h>

int main()
{
    int i,t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        if (n == 1)
        {
            printf("1\n");
            continue;
        }

        if (n == 3)
        {
            printf("-1\n");
            continue;
        }

        for (i = 1; i <= n; i += 2)
        {
            printf("%d ", i);
        }

        for (i = 2; i <= n; i += 2)
        {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main()
{
    int N, i, sum = 0, sign = 1;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        sum += i * sign;
        if (i % 3 == 0)
            sign = -sign;
    }
    printf("%d\n", sum);
    return 0;
}

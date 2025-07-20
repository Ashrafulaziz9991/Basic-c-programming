#include <stdio.h>
#include <math.h>

int main()
{
    long long int T;
    scanf("%lld", &T);

    while (T--)
    {
        long long int L, R;
        scanf("%lld %lld", &L, &R);
        long long int sum = 0;

        if (L > R)
        {
            for (int i = R; i <= L; i++)
            {
                sum += i;
            }
        }
        else if (L < R)
        {
            for (int i = L; i <= R; i++)
            {
                sum += i;
            }
        }
        else
        {
            sum = L;
        }

        printf("%d\n", sum);
    }

    return 0;
}

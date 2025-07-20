#include <stdio.h>

int main()
{
    int T, n, count;
    char S[1005];

    scanf("%d", &T);
    while (T--)
    {
        count = 0;
        scanf("%d", &n);
        scanf("%s", S);

        for (int i = 0; i < n - 1; i++)
        {
            if (S[i] == '0' && S[i + 1] == '1')
            {
                count++;
            }
            else if (S[i] == '1' && S[i + 1] == '0')
            {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}

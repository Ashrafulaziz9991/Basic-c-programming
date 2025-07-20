#include<stdio.h>

int main()
{
    int N, K, i, Roll[25];

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &Roll[i]);
    }
    scanf("%d", &K);

    if (K == 0)
    {
        // there is no girl's notebooK
        for (i = 0; i < N; i++)
        {
            printf("%d ", Roll[i]);
        }
    }
    else
    {
        for (i = K; i < N; i++)
        {
            printf("%d ", Roll[i]);
        }
        for (i = 0; i <K; i++)
        {
            printf("%d ", Roll[i]);
        }
    }
    return 0;
}


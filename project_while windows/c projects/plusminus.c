#include <stdio.h>

int main()
{
    int i,N;
    scanf("%d", &N);

    char signs[N + 1];
    scanf("%s", signs);

    int max_sequ_signs = 0;
    int current_sequ = 1;
    for (i = 1; i < N; i++)
    {
        if (signs[i] == signs[i - 1])
        {
            current_sequ++;
        }
        else
        {
            if (current_sequ > max_sequ_signs)
            {
                max_sequ_signs = current_sequ;
            }
            current_sequ = 1;
        }
    }

    if (current_sequ > max_sequ_signs)
    {
        max_sequ_signs = current_sequ;
    }

    printf("%d\n", max_sequ_signs);

    return 0;
}

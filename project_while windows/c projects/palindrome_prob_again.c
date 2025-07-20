#include <stdio.h>
#include <string.h>

int main()
{
    int T, i, j;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        char S[100];
        scanf("%s", S);
        char mmm[100];
        int len, d;

        len = strlen(S);
        for (j = 0; j < len; j++)
        {
            mmm[j] = S[len - j - 1];
        }
        mmm[j] = '\0';

        d = strcmp(S, mmm);

        if (d != 0)
        {
            printf("not palindrome\n");
        }
        else
        {
            if (len < 7)
            {
                printf("%s\n", mmm);
            }
            else
            {
                printf("%c%d%c\n", S[0], len - 2, S[len - 1]);
            }
        }
    }
    return 0;
}

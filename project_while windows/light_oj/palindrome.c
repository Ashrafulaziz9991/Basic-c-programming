#include <stdio.h>
#include <string.h>
int main()
{
    int T, i, j;
    scanf("%d", &T);
    while(T--)
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
            printf("palindrome\n");
        }
    }
    return 0;
}

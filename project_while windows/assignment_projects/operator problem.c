#include <stdio.h>
int main()
{
    char S[21];
    int a, b, i, sum = 0;

    scanf("%s", S);
    scanf("%d %d", &a, &b);

    i=0;
    while(S[i]!='\0')
    {
        if (S[i] == '+')
        {
            sum += a + b;
        }
        else if (S[i] == '*')
        {
            sum += a * b;
        }
        i++;
    }
    printf("%d", sum);
    return 0;
}


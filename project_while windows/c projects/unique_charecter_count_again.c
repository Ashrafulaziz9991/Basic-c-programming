#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int count_Unique_Characters(const char *str, int length);

int main()
{
    int N;
    scanf("%d", &N);
    char S[N+1];
    scanf("%s", S);
    int uniqueCount = count_Unique_Characters(S, N);
    printf("%d\n", uniqueCount);

    return 0;
}

int count_Unique_Characters(const char *str, int length)
{
    int count[26] = { 0 };
    for (int i = 0; i < length; i++)
    {
        count[str[i] - 'a']++;
    }
    int unique_count=0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 1)
        {
            unique_count++;
        }
    }
    return unique_count;
}

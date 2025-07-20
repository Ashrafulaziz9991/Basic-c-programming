#include <stdio.h>

int main()
{
    int n, i;
    char signs[101];

    scanf("%d", &n);
    scanf("%s", signs);

    int max_pos_count = 0;
    int cp_count = 0;
    for (i = 0; i < n; i++)
    {
        if (signs[i] == '+')
        {
            cp_count++;
        }
        else
        {
            cp_count = 0;
        }
        max_pos_count = (cp_count > max_pos_count) ? cp_count : max_pos_count;
    }

    printf("%d\n", max_pos_count);

    return 0;
}

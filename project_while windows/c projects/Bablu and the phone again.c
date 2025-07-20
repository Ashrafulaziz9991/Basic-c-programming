#include<stdio.h>
int main()
{
    int T, x;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%%", &x);
        if (x < 60) {
            printf("%d minuTes\n", (60 - x));
        } else if (x < 80) {
            printf("%d minuTes\n", 2 * (80 - x));
        } else {
            printf("%d minuTes\n", 3 * (100 - x));
        }
    }
    return 0;
}

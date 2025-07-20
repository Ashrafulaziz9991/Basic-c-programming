#include<stdio.h>
int main()
{
    int n, sum = 0, digit;
    scanf("%d", &n);
    for (int i = n; i > 0; i /= 10)
    {
        digit = i % 10;
        sum += digit;
    }
    printf("%d\n", sum);
    return 0;
}

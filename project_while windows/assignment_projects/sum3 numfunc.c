#include <stdio.h>

int add_three_nums(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int x, y, z=0;
    scanf("%d %d", &x, &y);

    int sum = add_three_nums(x, y, z);

    printf("Sum: %d\n", sum);

    return 0;
}

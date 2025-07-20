#include <stdio.h>

int main()
{
    int x, y;
    printf("Please Enter 2 inputs :");
    scanf("%d, %d", &x, &y);
//there's mistake in this code
    if (x > y)
    {
        printf("x is a large number.\n");
    }

    else
    {
        printf("y is a large number number.\n");
        return 0;
    }
}

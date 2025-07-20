#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int *pX, *pY;
    pX = &x;
    pY = &y;
    printf("%d %d\n", *pX, *pY);
    return 0;
}


#include<stdio.h>
int main()
{
    int a, b, c, n;
    scanf("%d", &n);
    int solved = 0;
    while(n--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a+b+c>=2)
            solved++;
    }
    printf("%d", solved);
    return 0;
}

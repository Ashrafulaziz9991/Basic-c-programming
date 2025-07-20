#include<stdio.h>
int main()
{
    int t,add = 0, sum = 0;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        add =(n/1000 + n%10);
        sum = sum += add;
    }
    printf("%d", sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int N, S;
    scanf("%d %d", &N, &S);
    int diff = S-N;
    printf("%d", diff/2);
    return 0;
}

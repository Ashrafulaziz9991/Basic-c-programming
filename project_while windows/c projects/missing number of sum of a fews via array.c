#include<Stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int S,A,B,C;
        scanf("%d%d%d%d", &S, &A, &B, &C);
        printf("%d\n", S - A - B - C);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    long long int N, comb=0;
    scanf("%lld", &N);
    comb=(N * (N - 1)) / 2;
    printf("%lld\n",comb);
    return 0;
}

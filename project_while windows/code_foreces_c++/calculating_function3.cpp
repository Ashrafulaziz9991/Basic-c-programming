#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    scanf("%lld", &n);

    long long result = 0;
    long long i = 1;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            result += i;
        }
        else
        {
            result -= i;
        }
        i++;
    }

    printf("%lld\n", result);
}

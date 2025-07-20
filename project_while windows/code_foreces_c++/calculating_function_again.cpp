#include <iostream>
using namespace std;

long long calculate_f(long long n)
{
    if (n % 2 == 0)
    {
        return n / 2;
    }
    else
    {
        return -(n + 1) / 2;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    cout <<calculate_f(n);
    return 0;
}

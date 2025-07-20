#include<bits/stdc++.h>
using namespace std;

void sum(int x)
{
    if (x == 0)
        return;

    cout << x - 1 << " ";
    sum(x);
}

int main()
{
    int n;
    cin >> n;
    sum(n);
    return 0;
}

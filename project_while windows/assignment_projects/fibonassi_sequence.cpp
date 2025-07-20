#include<bits/stdc++.h>

using namespace std;

unsigned fib(unsigned n);

int main()
{
    int num;
    cin>>num;
    // Printing the first 'num' Numbers Fibonacci sequence values
    for (unsigned i = 0; i < num; i++)
    {
        cout << "fib(" << i << ") = " << fib(i) << endl;
    }
}

unsigned fib(unsigned n)
{
    if (n < 2)
        return n;

    unsigned prev1 = 0;
    unsigned prev2 = 1;

    for (unsigned i = 0; i <= n-2; i++)
    {
        unsigned temp = prev1 + prev2;
        // Just doing a rotation of values, since only the last two are needed
        prev1 = prev2;
        prev2 = temp;
    }

    return prev2;
}

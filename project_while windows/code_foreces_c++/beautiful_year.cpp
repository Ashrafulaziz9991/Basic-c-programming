#include<bits/stdc++.h>
using namespace std;

void distinct_numbers(int n)
{
    int temp;
    while(n>0)
    {
        temp=n%10;

    }
    n/=10;
    cout<<temp<<"\n";
}

int main()
{
    int n;
    cin>>n;
    distinct_numbers(n);
    return 0;
}

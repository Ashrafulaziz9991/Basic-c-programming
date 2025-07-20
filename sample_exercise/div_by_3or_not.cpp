#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        long long n;cin>>n;
        (n%3==0)?cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}

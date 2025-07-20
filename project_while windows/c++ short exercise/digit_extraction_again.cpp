#include<bits/stdc++.h>
using namespace std;

void digit_extract(int n)
{
    while(n>0)
    {
        int temp = n%10;
        cout<<temp<<" ";
        n/=10;
    }
    return;
}

int main()
{
    int num;
    cin>>num;
    digit_extract(num);
    return 0;
}

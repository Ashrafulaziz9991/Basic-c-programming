#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    while(a!=0)
    {
        int temp = a%10;
        cout<<temp<<endl;
        a/=10;
    }
    return 0;
}

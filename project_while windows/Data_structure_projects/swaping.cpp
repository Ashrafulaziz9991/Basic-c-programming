#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"\nEnter b:";
    cin>>b;

    a = a-b;
    b = a+b;
    a = b-a;

    cout<<"A is "<<a<<" and B is "<<b;
    return 0;
}

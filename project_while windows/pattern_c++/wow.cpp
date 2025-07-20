#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(i%2!=0)
                cout<<"^";
            else
                cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

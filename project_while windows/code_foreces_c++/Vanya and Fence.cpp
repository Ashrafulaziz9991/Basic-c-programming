#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, sum = 0;
    cin>>n>>h;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>bend_down(n);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        if(v[i]>h)
        {
            bend_down[i]=2;
        }
        else
        {
            bend_down[i]=1;
        }
        cout<<bend_down[i]<<" ";
    }
    return 0;
}

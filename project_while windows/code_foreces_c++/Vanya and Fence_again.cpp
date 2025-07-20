#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, sum = 0;
    cin>>n>>h;
    vector<int>v(n), bend_down(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

        if(v[i]>h)
        {
            bend_down[i]=2;
        }
        else
        {
            bend_down[i]=1;
        }
        sum+=bend_down[i];
    }
    cout<<sum;
    return 0;
}


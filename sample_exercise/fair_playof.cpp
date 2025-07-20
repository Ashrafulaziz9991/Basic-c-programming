#define FAST_IO  ios_base::sync_with_stdio(0);cin.tie(0);
#include <bits/stdc++.h>
using namespace std;

int main()
{
    FAST_IO
    int t;cin>>t;
    while(t--)
    {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        
        int max1= max(a,b);
        int max2= max(c,d);
        int min1= min(a,b);
        int min2= min(c,d);

        (max1>min2 && max2>min1) ? cout<<"Yes\n" : cout<<"No\n";
    }
    return  0;
}

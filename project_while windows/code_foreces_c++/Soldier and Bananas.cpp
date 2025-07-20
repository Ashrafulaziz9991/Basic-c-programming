#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k, n, w;
    cin>>k>>n>>w;
    int i, sum = 0;
    for(i=1;i<=w;i++)
    {
        sum += (k*i);
    }
    if(n>=sum)
        cout<<"0";
    else
        cout<<sum-n;
    return 0;
}

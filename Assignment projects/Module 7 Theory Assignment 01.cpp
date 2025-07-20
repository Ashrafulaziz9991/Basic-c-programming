#include<bits/stdc++.h>
//Fixing the flaw issue of distinct elements in array Q-4

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    int ans = (n>0)? 1 : 0;
    for(int i=1 ; i<n ; i++)
        if(a[i]!=a[i-1])
            ans++;
    cout<<"\nDistinct element total counted "<<ans;


    return 0;
}


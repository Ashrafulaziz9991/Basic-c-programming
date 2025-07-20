#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m;cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++)
        cin>>b[i];
    vector<int>c;
    for(int i=0;i<m;i++)
    {
        if(a[i]==b[i-1])
        {
            c.push_back(b[i]);
        }
    }
    for(int i : c)
        cout<<i<<" ";

    return 0;
}

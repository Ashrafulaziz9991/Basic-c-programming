#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    vector<int>v1;
    int n;
    cout<<"Enter An positive Integers :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v1.push_back(a);
    }

    for(int i=0;i<n;i++)
    {
        cout<<v1[i]<<" ";
    }
    return 0;
}

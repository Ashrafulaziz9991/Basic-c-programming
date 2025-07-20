#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    //without initialize size of vector
    int sum=0;
    for(int i=0;i<10;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    for(int i=0;i<10;i++)
    {
        sum+=v[i];
    }
    cout<<sum;

    return 0;
}


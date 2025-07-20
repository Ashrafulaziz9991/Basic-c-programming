#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*ios_base::sync_with_stdio(0);

    vector<int>v1;
    int n;
    cout<<"Enter An positive Integers :";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int n;
        //cout<<"Enter the Numbers :";
        cin>>n;
        v1.push_back(n);
    }

    for(int i=0; i<n; i++)
    {
        cout<<v1[i]<<" ";
    }*/

    vector<int>t = {3, 5, 8, 7, 6, 2, 1};

    //cout<<t[5]<<endl;

    for(int i = 0; i<t.size(); i++)
        cout<<t[i]<<" ";

    cout<<endl;

    cout<<"After sorting & reverse order :"<<endl;

    sort(t.begin(), t.end());

    reverse(t.begin(), t.end());

    for(int i = 0; i<t.size(); i++)
        cout<<t[i]<<" ";

    cout<<endl;
    return 0;
}

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    /*
    vector<int>v(10); //vector size initialized
    for (int i=0;i<10;i++)
    {
        cin>>v[i];
    }
    for (int i=0;i<10;i++)
    {
        cout<<v[i]<<" ";
    }*/
    /*cout<<"Enter the digit :";
    int n;cin>>n;
    vector<int>v(n); //vector size taking as input
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for (int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }*/
    vector<int>v(10); //vector size unknown(using push back function)
    for (int i=0;i<10;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    for (int i=0;i<10;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}


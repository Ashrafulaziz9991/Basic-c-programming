/**
*Quick sort algorithm
*Non increasing Order
**/
#include<bits/stdc++.h>
using namespace std;

vector<int> Quick_sort_Again(vector<int>x);

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
//    vector<int>v = {3,9,8,6,5,4,7,10,12,15,63,8};
    for(int i=0; i<n; i+=1)
    {
        cin>>v[i];
    }
    vector<int>answer = Quick_sort_Again(v);
    for(int num : answer)
    {
        cout<<num<<" ";
    }
    return 0;
}

vector<int> Quick_sort_Again(vector<int>x)
{
    if(x.size()<=1)
        return x;

    int pivot = rand()%(x.size());

    vector<int>y, z;

    for(int i = 0; i<x.size(); i++)
    {
        if(i == pivot)
        {
            continue;
        }
        else if(x[i]>=x[pivot])
        {
            y.push_back(x[i]);
        }
        else
        {
            z.push_back(x[i]);
        }
    }
    vector<int>sorted_y = Quick_sort_Again(y);
    vector<int>sorted_z = Quick_sort_Again(z);
    vector<int>sorted_x;

    for(int i=0;i<sorted_y.size();i++)
    {
        sorted_x.push_back(sorted_y[i]);
    }
    sorted_x.push_back(x[pivot]);

    for(int i=0;i<sorted_z.size();i++)
    {
        sorted_x.push_back(sorted_z[i]);
    }
    return sorted_x;
}

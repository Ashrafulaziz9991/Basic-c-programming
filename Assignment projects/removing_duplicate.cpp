#include<bits/stdc++.h>
using namespace std;

vector<int>merge_sort(vector<int>a)
{
    if(a.size()<=1)
    {
        return a;
    }

    int mid = a.size()/2;
    vector<int>b;
    vector<int>c;

    for(int i=0; i<mid; i++)
    {
        b.push_back(a[i]);
    }
    
    for(int i=mid; i<a.size(); i++)
    {
        c.push_back(a[i]);
    }

    vector<int>sorted_b = merge_sort(b);
    vector<int>sorted_c = merge_sort(c);

    vector<int>sorted_a;
    int idx1 = 0;
    int idx2 = 0;

    for(int i=0; i<a.size(); i++)
    {
        if(idx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(idx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if(sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //shortcut way
    /*
    int n;
    cin>>n;
    set<int>unique_num;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        unique_num.insert(a);
    }
    for (auto i : unique_num)
    {
        cout<<i<<" ";
    }
    */

   //for practicing we used sorting algorithm
   
    int n;
    cin>>n;
    vector<int>x(n), vec;
    set<int>unique_num;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>x[i];
    }
    vec = merge_sort(x);
    for (int i = 0; i < n; i++)
    {
        unique_num.insert(vec[i]);
    }
    for (auto i : unique_num)
    {
        cout<< i <<" ";
    }
    
    return 0;
}



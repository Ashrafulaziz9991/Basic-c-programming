/**
*Quick sort algorithm
*time complexity is O(n log n)
*This Sort is in Increasing Order
**/

/*
#include<bits/stdc++.h>
using namespace std;

vector<int> Quick_sort(vector<int>a)
{
    if(a.size()<=1)
        return a;

    int pivot = a.size()-1;

    vector<int>b;
    vector<int>c;

    for(int i=0; i<a.size(); i++)
    {
        if(i == pivot)
            continue;
        else if(a[i]<=a[pivot])
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }
    vector<int>sorted_b = Quick_sort(b);
    vector<int>sorted_c = Quick_sort(c);
    vector<int>sorted_a;

    for(int i=0; i<sorted_b.size(); i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }

    sorted_a.push_back(a[pivot]);

    for(int i=0; i<sorted_c.size(); i++)
    {
        sorted_a.push_back(sorted_c[i]);
    }
    return sorted_a;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vector<int>ans = Quick_sort(v);
    for(int number : ans)
    {
        cout<<number<<" ";
    }
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> Quick_sort(vector<int>a)
{
    if(a.size()<=1)
        return a;

    ///to take random number
    int pivot = rand()%(a.size());
    //int pivot = a.size()-1;

    vector<int>b;
    vector<int>c;

    for(int i=0; i<a.size(); i++)
    {
        if(i == pivot)
            continue;
        else if(a[i]<=a[pivot])
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }
    vector<int>sorted_b = Quick_sort(b);
    vector<int>sorted_c = Quick_sort(c);
    vector<int>sorted_a;

    for(int i=0; i<sorted_b.size(); i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }

    sorted_a.push_back(a[pivot]);

    for(int i=0; i<sorted_c.size(); i++)
    {
        sorted_a.push_back(sorted_c[i]);
    }
    return sorted_a;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vector<int>ans = Quick_sort(v);
    for(int number : ans)
    {
        cout<<number<<" ";
    }
    return 0;
}

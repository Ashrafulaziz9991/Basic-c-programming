/**Binary search algorithm**/
#include<bits/stdc++.h>
using namespace std;
int Binary_search(vector<int>v, int n, int key)
{
    int start = 0;
    int endd = n;

    while(start<=endd)
    {
        int mid =(start+endd)/2;

        if(v[mid]==key)
        {
            return mid;
        }
        else if(v[mid]>key)
        {
            endd = mid - 1;
        }
        else
        {
            start = mid +1;
        }
    }
    return -1;
}
/**
*array should be sorted first to start the binary search
*sorted shoud be acsending or decsending order
**/
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    int k;
    cout<<"Enter Your Key :";
    cin>>k;
//    cout<<Binary_search(vec, n, target);
    if(Binary_search(vec, n, k)!= -1)
    {
        cout<<Binary_search(vec, n, k)<<"\n";
    }
    else
    {
        cout<<"Not found.";
    }

//    cout<<counter<<endl;
    return 0;
}

/*

#include<bits/stdc++.h>
using namespace std;
//Linear search algorithm
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }

    int target;
    cout<<"Enter Your Key :";
    cin>>target;

    for(int i=0;i<n;i++)
    {
        if(vec[i] == target)
        {
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
*/

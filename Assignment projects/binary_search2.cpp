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
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    int k, counter = 0;
    cout<<"Enter Your Key :";
    cin>>k;

    auto lower = lower_bound(vec.begin(), vec.end(), k);
    auto upper = upper_bound(vec.begin(), vec.end(), k);

    int count = upper - lower;

    if(Binary_search(vec, n, k)!= -1 && count>1)
    {
        cout<<Binary_search(vec, n, k)<<"\n";
    }
    else
    {
        cout<<"Not found.";
    }
    return 0;
}

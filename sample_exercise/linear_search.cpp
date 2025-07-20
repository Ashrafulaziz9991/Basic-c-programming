#include<bits/stdc++.h>
using namespace std;
//Linear search algorithm
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    int target;
    cout<<"Enter Your Key :";
    cin>>target;

    for(int i=0; i<n; i++)
    {
        if(vec[i] == target)
        {
            cout<<"found, index is "<<i<<endl;
            return 0;
        }

    }
    cout<<"Not found.\n";

    return 0;
}

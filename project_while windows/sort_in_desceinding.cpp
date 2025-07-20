#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i = 0; i<n; i++)
    {
        cin>>vec[i];
    }
    //using builtin function
    //reverse(vec.begin(), vec.end());

    int start = 0, endd = vec.size() - 1;

    while(start < endd)
    {
        int temp = vec[start];
        vec[start] = vec[endd];
        vec[endd] = temp;
        start++, endd--;
    }

    for(int i : vec)
        cout<<i<<" ";
    return 0;
}

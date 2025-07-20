#include<bits/stdc++.h>
using namespace std;
int pair_count(vector<int>&v, int key)
{
    int n = v.size();
    int count = 0;

    sort(v.begin(), v.end());//works as merge function

    int left = 0, right = n-1;

    while(left<right)
    {
        int sum = v[left] + v[right];
        if(sum == key)
        {
            count++;
            left++;
            right--;
        }
        else if(sum<key){
            left++;
        }
        else{
            right--;
        }
    }
    return count;
}
int main()
{
    int n;cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int sum;
    cin>>sum;
    int cnt = pair_count(vec, sum);
    cout<<cnt;
    return 0;
}

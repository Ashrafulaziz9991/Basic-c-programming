/*#include<bits/stdc++.h>
using namespace std;
//time comeplexity is O(nlogn);
int main()
{
    int n, k;cin>>n;
    vector<int>vec(n-1);
    vector<int>v;
    for(int i=0;i<n-1;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());

    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    for(int i=1;i<=n;i++)
    {
        if(vec[i]!=v[i])
        {
            cout<<v[i];
            return 0;
        }
    }
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
//time comeplexity is O(n);
int main()
{
    int n,sum = 0;cin>>n;
    vector<int>vec(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>vec[i];
        sum+=vec[i];
    }
    int sum2 = (n*(n+1))/2;
    cout<<sum2-sum<<endl;
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
//time comeplexity is O(n);
int main()
{
    int n,sum = 0;cin>>n;
    vector<int>vec(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>vec[i];
        sum+=vec[i];
    }
    int sum2 = 0;
    for(int i=1;i<=n;i++)
    {
        sum2 += i;
    }

    cout<<sum2-sum<<endl;
    //cout<<sum2<<endl;
    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int>a)
{
    if(a.size()<=1)
        return a;

    int mid = a.size()/2;

    vector<int>b;
    vector<int>c;

    for(int i=0;i<mid;i++)
    {
        b.push_back(a[i]);
    }
    for(int i=mid;i<a.size();i++)
    {
        c.push_back(a[i]);
    }

    vector<int>sorted_b = merge_sort(b);
    vector<int>sorted_c = merge_sort(c);

    vector<int>sorted_a;

    int idx1 = 0;
    int idx2 = 0;

    for(int i=0;i<a.size();i++)
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
        else if(sorted_b[idx1]<sorted_c[idx2])
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
    int n;cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    vector<int>ans = merge_sort(vec);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int k, counter = 0;
    //cin>>k;
    scanf("%d", &k);
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]+vec[i+1]==k)
        {
            counter++;
            cout<<counter<<endl;
//            cout<<i<<endl;
//            cout<<i+1<<endl;
            break;
        }
    }
    //cout<<counter<<endl;
    return 0;
}

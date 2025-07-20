/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n), v2;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    //  vector<int>v2, v = {1,5,8,6,3,7,9,2};
    //  int ct = 0;

    // //int k;cin>>k;
    // int k = 2, i = 0, j = 0, sum = 0, mx = INT_MIN;

    // while (j<v.size())
    // {
    //     if(j<k){
    //         sum +=v[j];
    //         j++;
    //     }
    //     else{
    //         mx = max(mx, sum);
    //         sum-=v[i];
    //         i++;
    //         sum+=v[j];
    //         j++;
    //     }
    // }
    // cout<<sum;

    int sz = v.size();
    //int mx = INT_MIN;
    int mx = v[0];
    //int mn = INT_MAX;
    int mn = v[0];

    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = i+1; j < sz; j++)
    //     {
    //         // if (v[i]>v[j])
    //         // {
    //         //     swap(v[i],v[j]);
    //         // }
    //         int mx = max(v[i],v[j]);
    //         //int mx2 = max(v[i],v[j]);
    //         v2.push_back(mx);
    //         int mn = min(v[i], v[j]);
    //     }

    // }

    for (int i = 0; i < v.size(); i++)
    {
        mx = max(mx, v[i + 1]);

        // mx2 = max(mx, v[i+1]);

        v2.push_back(mx);
    }

    for (auto &&i : v)
    {
        cout << i << " ";
    }

    cout << "\n";
    for (auto &&i : v2)
    {
        cout << i << " ";
    }
    cout << "\n";

    //cout << ct;
}
*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n),v2, v3, v4, v5;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    //vector<int>v3, v2, v = {1,5,8,6,3,7,9,2};
    int mx , mn , ct = 0;
    //int n = v.size();
    // for (int i = 0; i<n; i++)
    // {
    //     mx = max(mx, v[i+1]);
    //     //s.insert(mx);
    //     v2.push_back(mx);
    //     mn = min(mn, v[i+1]);
    //     //s2.insert(mn);
    //     v3.push_back(mn);
    //     ct++;
    // }

    mx = max(v[0], v[1]);
    v2.push_back(mx);
    mn = min(v[0], v[1]);
    v3.push_back(mn);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         mx = max(v[i], v[j]);
    //     }
    //     v2.push_back(mx);
    // }

    for (int i = 2; i < n; i++)
    {
        mx = max(mx, v[i]);
        v2.push_back(mx);
        mn = min(mn, v[i]);
        v3.push_back(mn);
    }

    for (int i = 0; i < v2.size(); i++)
    {
        if (v2[i] != v2[i+1])
        {
            v4.push_back(v2[i]);
        }
        
    }
    
    for (int i = 0; i < v3.size(); i++)
    {
        if (v3[i] != v3[i+1])
        {
            v5.push_back(v3[i]);
        }
        
    }

    // for (auto &&i : v)
    // {
    //     cout<< i <<" ";
    // }

    // cout<<"\n";
    
    // for (auto &&i : v2)
    // {
    //     cout<< i <<" ";
    // }
    // //cout<<"\n"<<ct;
    
    // cout<<"\n";
    
    // for (auto &&i : v3)
    // {
    //     cout<< i <<" ";
    // }

    // cout<<"\n";
    
    for (auto &&i : v4)
    {
        //cout<< i <<" ";
        v5.push_back(i);
    }

    cout<<"\n";
    
    for (auto &&i : v5)
    {
        cout<< i <<" ";
    }

    for (int i = 0; i < v5.size(); i++)
    {
        if(v5[i] != v5[i+1])
            ct++;
    }
    
    cout<<ct;
    
    

    return 0;
}
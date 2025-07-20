#include<bits/stdc++.h>
using namespace std;

void ascend(int a, vector<int>v)
{
    for (int i = 0; i < a; ++i) {
        for (int j =i+1; j < a; ++j) {
            if(v[i] > v[j]) //ascending order condition
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    for (int i: v) {
        cout<<i<<" ";
    }
    return;
}

void descend(int a, vector<int>v)
{
    for (int i = 0; i < a; ++i) {
        for (int j =i+1; j < a; ++j) {
            if(v[i] < v[j]) //descending order condition
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    for (int i: v) {
        cout<<i<<" ";
    }
    return;
}

int main()
{
    int n;cin>>n;
    vector<int>vec(n);
    for (int i = 0; i < n; ++i) {
        cin>>vec[i];
    }
    cout<<"Ascending order is : ";
    ascend(n, vec);

    cout<<"\nDescending order is : ";
    descend(n, vec);
    
    return 0;
}

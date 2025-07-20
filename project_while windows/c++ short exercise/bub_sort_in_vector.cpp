#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v1.push_back(a);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v1[i]>v1[j])
            {
                int temp = v1[i]; //ascending order using vector
                v1[i] = v1[j];
                v1[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<v[i]<<" ";
    }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[110];
    char k[50];

    for(int i=0;a[i]!=0;i++)
    {
        cin>>a[i]>>k[i]>>a[i+1];
    }

    for(int i=0;a[i]!=0;i++)
    {
        if(k[i]=='+')
        {
            //do nothing
        }
        sort(a[i].begin(), a[i].end());
        cout<<a[i];
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    getline(cin, s1);
    string s2;
    getline(cin, s2);
    for(int i=0; i<s1.size() - 1/*&& i<s2.size()*/; i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]+=32;
        }

        if(s2[i]>='A' && s2[i]<='Z')
        {
            s2[i]+=32;
        }

        if(s1[i]>s2[i])
        {
            cout<<"1";
            return 0;
        }
        else if(s1[i]<s2[i])
        {
            cout<<"-1";
            return 0;
        }
    }
        cout<<"0";
    return 0;
}

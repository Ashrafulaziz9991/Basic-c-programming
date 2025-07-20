#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin, s);
    int i, capital_count = 0, small_count = 0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            {
                capital_count++;
            }
        else if(s[i]>='a' && s[i]<='z')
        {
            small_count++;
        }
    }
    for(i=0;i<s.size();i++)
    {
        if(small_count>=capital_count && s[i]>='A' && s[i]<='Z')
        {
                s[i]+=32;
        }
        else if(small_count<capital_count && s[i]>='a' && s[i]<='z')
        {
                s[i]-=32;
        }
    }
    cout<<s;
    return 0;
}

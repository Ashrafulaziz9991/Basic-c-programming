#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int i=0, capital_count = 0, small_count = 0;
    while(i<s.size())
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            capital_count++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            small_count++;
        }
        i++;
    }
    i=0;
    while(i<s.size())
    {
        if(small_count>=capital_count && s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
        }
        else if(small_count<capital_count && s[i]>='a' && s[i]<='z')
        {
            s[i]-=32;
        }
        i++;
    }
    cout<<s;
    return 0;
}

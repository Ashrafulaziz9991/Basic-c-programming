#include<bits/stdc++.h>
using namespace std;

string palindrome(string t)
{
   if(t.empty())
       return"";
    char ltr = t.back();
    t.pop_back();
   return ltr + palindrome(t);
}

int main()
{
    string s, s2;
    getline(cin, s);
    if(s == palindrome(s))
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
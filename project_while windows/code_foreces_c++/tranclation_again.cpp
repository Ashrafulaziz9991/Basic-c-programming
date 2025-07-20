#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    reverse(s.begin(), s.end());
    string s2;
    getline(cin, s2);
    if(s==s2)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}


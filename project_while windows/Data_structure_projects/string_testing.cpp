#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin,s);
    reverse(s.begin()+2, s.end());
    cout<<s<<"\n";
    reverse(s.begin(), s.end());
    cout<<s<<"\n";
    cout<<s.size()<<"\n";
    return 0;
}



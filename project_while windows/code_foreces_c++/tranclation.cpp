#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter s2 :\n";
    string s;
    getline(cin, s);
    cout<<"Enter s2 :\n";
    string s2;
    getline(cin, s2);
    string v = s;
    reverse(v.begin(), v.end());

    if(s2==v)
    {
        cout<<"Yes";
    }
    else
        cout<<"No";

//
//    cout<<"s is "<<s<<"\n";
//    cout<<"s2 is "<<s2<<"\n";
//    cout<<"v is "<<v<<"\n";
    return 0;
}

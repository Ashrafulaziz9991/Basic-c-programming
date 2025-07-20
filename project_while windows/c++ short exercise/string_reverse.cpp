#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    //reverse from specific position
    reverse(s.begin()+2,s.end());
    cout<<"\nreverse from specific position in string:\n";
    cout<<s;
    cout<<"\nBefore reverse string:\n"<<s;
    reverse(s.begin(),s.end());
    cout<<"\nAfter reverse string:\n";
    cout<<s;





    return 0;
}

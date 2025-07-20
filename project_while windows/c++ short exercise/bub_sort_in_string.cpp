#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    //cin>>s;
    getline(cin, s);
    int i;
    char c;
    for(int k=0;k<s.size();k++)
    {
        //cout<<typeid(s[k]).name()<<endl;
        if(typeid(s[k]).name() == c && c == i)
        {
            sort(s[k].begin(), s[k].end());
            break;
        }
    }
    cout<<s;
    return 0;
}

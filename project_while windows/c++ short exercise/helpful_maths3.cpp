#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin, s);

    for(int i=0;i<s.size();i+=2)
    {
        for(int j=i+1;j<s.size();j+=2)
        {
            if(s[i]>s[j])
            {
                swap(s[i], s[j]);
                //sort(s[i].begin, s[i+1].end()])
            }
        }
    }
    cout<<s;
    return 0;
}

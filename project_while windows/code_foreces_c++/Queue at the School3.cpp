#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin>>n>>t;
    vector<char>s(n);
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'B' && s[i+1] == 'G')
        {
            char temp = s[i];
            s[i] = s[i+1];
            s[i+1] = temp;
        }

            t--;
            n++;
    }
    //cout<<s[i];
    for (char c : s) {
        cout <<c;
    }
//    cout<<s;
    return 0;
}
